using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Enter the first number:");
        double num1 = Convert.ToDouble(Console.ReadLine()); // Explicit type casting

        Console.WriteLine("Enter the second number:");
        double num2 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Enter the third number:");
        double num3 = Convert.ToDouble(Console.ReadLine());

        double sum = num1 + num2 + num3;

        Console.WriteLine($"The sum of {num1}, {num2}, and {num3} is {sum}");
    }
}
