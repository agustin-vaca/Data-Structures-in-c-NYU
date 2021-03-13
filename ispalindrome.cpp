bool is_palindrome(int test) {
    int copyNumber, currentDigit, reversedNumber = 0;
     copyNumber = test;
     do
     {
         currentDigit = copyNumber % 10; //takes the remainder
         reversedNumber = (reversedNumber * 10) + currentDigit; //creating the reversed number
         copyNumber= copyNumber / 10; //creating new number
     } while (copyNumber != 0);


     if (test == reversedNumber){
         return true;
     }
     else {
         return false;
     }
}