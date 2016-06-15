using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace Coin_Jam_CS
{
    class Program
    {
        const int P_SIZE = 12;
        static int[] primes = new int[P_SIZE]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };
        static int[] factors = new int[9];
        public static string ToNBase(BigInteger a, int n)
        {
            StringBuilder sb = new StringBuilder();
            while (a > 0)
            {
                sb.Insert(0, a % n);
                a /= n;
            }
            return sb.ToString();
        }
        static void Main(string[] args)
        {
            using (System.IO.StreamWriter file =
            new System.IO.StreamWriter(@"c:\users\corey\documents\visual studio 2015\Projects\Coin Jam CS\Coin Jam CS\coinjam_output.txt"))
            {
                BigInteger num = BigInteger.Parse("10000000000000000000000000000001");
                //BigInteger num = BigInteger.Parse("1000000000000001");
                file.Write("Case #1:\n");
                int count = 0;
                while (count < 500)
                {
                    bool isjamcoin = true;
                    for (int i = 2; i < 11; i++)
                    {
                        BigInteger n = num.ToString().Aggregate(new BigInteger(), (b, c) => b * i + c - '0');
                        bool prime = true;
                        for (int j = 0; j < P_SIZE; j++)
                        {
                            if (n % BigInteger.Parse(primes[j].ToString()) == 0)
                            {
                                prime = false;
                                factors[i - 2] = primes[j]; break;
                            }
                        }
                        if (prime)
                        {
                            isjamcoin = false;
                            break;
                        }
                    }
                    if (isjamcoin)
                    {
                        file.Write(num);
                        for (int i = 0; i < 9; i++)
                        {
                            file.Write(" " + factors[i]);
                        }
                        file.WriteLine();
                        count++;
                    }
                    BigInteger temp = num.ToString().Aggregate(new BigInteger(), (b, c) => b * 2 + c - '0') + BigInteger.Parse("2");
                    num = BigInteger.Parse(ToNBase(temp, 2));
                }
                //BigInteger temp = num.ToString().Aggregate(new BigInteger(), (b, c) => b * 2 + c - '0') + BigInteger.Parse("2");
                //Console.Write(BigInteger.Parse(ToNBase(temp, 2)));
            }
        }
    }
}
