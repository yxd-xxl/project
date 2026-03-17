using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace winexp1_1
{
    internal class exp1_2
    {
        public static void rotate(int[][] matrix)
        {
            for (int i = 0; i < matrix.Length - 1; i++)
            {
                for (int j = i; j < matrix.Length - 1 - i; j++)
                {
                    exchange(matrix, i, j, j, matrix.Length - 1 - i);
                    exchange(matrix, i, j, matrix.Length - 1 - i, matrix.Length - 1 - j);
                    exchange(matrix, i, j, matrix.Length - 1 - j, i);
                }
            }
        }

        public static void exchange(int[][] matrix, int i1, int j1, int i2, int j2)
        {
            matrix[i1][j1] = matrix[i1][j1] + matrix[i2][j2];
            matrix[i2][j2] = matrix[i1][j1] - matrix[i2][j2];
            matrix[i1][j1] = matrix[i1][j1] - matrix[i2][j2];
        }
    }
}
