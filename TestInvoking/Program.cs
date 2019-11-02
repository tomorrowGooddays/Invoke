using System;

namespace TestInvoking
{
    public class Program
    {
        public static void Main(string[] args)
        {
            try
            {
                Console.WriteLine("---------c#通过CLI调用C++类方法---------");
                Console.Write("请输入numberA:");
                int numberA = Convert.ToInt32(Console.ReadLine());
                Console.Write("请输入numberB:");
                int numberB = Convert.ToInt32(Console.ReadLine());

                InvokeCon invoke = new InvokeCon();
                int addResult = invoke.AddCli(numberA, numberB);
                int subResult = invoke.SubtractCli(numberA, numberB);
                int mutilResult = invoke.MultiplicationCli(numberA, numberB);
                int divResult = invoke.DividedCli(numberA, numberB);

                Console.WriteLine($"the {numberA} And {numberB} sum is:{addResult};sub is:{subResult};Mutil is:{mutilResult};div is:{divResult}");
            }
            catch(Exception ex)
            {
                Console.WriteLine($"ex:{ex}");
            }

            Console.WriteLine("执行成功");
            Console.ReadLine();
        }
    }
}
