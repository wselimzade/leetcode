using System;
using System.Collections.Generic;

public class Solution
{
    public string ConvertToTitle(int columnNumber)
    {
        string title = string.Empty;
        Dictionary<int, char> letters = new Dictionary<int, char>
        {
            {1,'A'},  {2,'B'},  {3,'C'},  {4,'D'},  {5,'E'},  {6,'F'},  {7,'G'},  {8,'H'}, 
            {9,'I'},  {10,'J'}, {11,'K'}, {12,'L'}, {13,'M'}, {14,'N'}, {15,'O'}, {16,'P'}, {17,'Q'}, 
            {18,'R'}, {19,'S'}, {20,'T'}, {21,'U'}, {22,'V'}, {23,'W'}, {24,'X'}, {25,'Y'}, {26,'Z'}
        };

        while (columnNumber > 0)
        {
            int remainder = columnNumber % 26;
            if (remainder == 0)
            {
                remainder = 26;
                columnNumber--;
            } 

            title = letters[remainder] + title;
            columnNumber /= 26;
        }

        return title;
    }
}
