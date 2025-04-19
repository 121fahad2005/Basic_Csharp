 using System;

namespace Code
{
    class Pro
    {
        // Constants or readonly values cannot be reassigned after declaration.
        // Corrected the conflicting use of const and readonly.
        readonly int b;

        public Pro()
        {
            // Assigning value to readonly variable in the constructor
            b = 23;
        }

        static void Main(string[] args)
        {
            int sum = 0;
            int no;

            Console.WriteLine("Enter the number:");
            
            // Corrected method name (ToInt32 instead of Toint32)
            no = Convert.ToInt32(Console.ReadLine());

            // Adding a loop to calculate the sum of natural numbers up to 'no'
            for (int i = 1; i <= no; i++)
            {
                sum += i;
            }

            Console.WriteLine("The sum of numbers from 1 to " + no + " is: " + sum);
        }
    }
}
