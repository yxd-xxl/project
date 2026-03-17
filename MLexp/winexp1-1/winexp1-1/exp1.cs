using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace winexp1_1
{
    internal class exp1
    {
        class Program
        {
            static int FindPivotIndex(int[] nums)
            {
                int totalSum = 0;
                foreach (int num in nums)
                    totalSum += num;

                int leftSum = 0;
                for (int i = 0; i < nums.Length; i++)
                {
                    int rightSum = totalSum - leftSum - nums[i];
                    if (leftSum == rightSum)
                        return i;
                    leftSum += nums[i];
                }

                return -1;
            }

            static void Main(string[] args)
            {
                Console.WriteLine("请输入数组：");
                string input = Console.ReadLine();
                int[] nums = Array.ConvertAll(input.Split(' '), int.Parse);
                int result = FindPivotIndex(nums);
                Console.WriteLine(result);
            }
        }
    }
}
