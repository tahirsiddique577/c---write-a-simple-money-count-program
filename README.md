# c---write-a-simple-money-count-program

Imagine you are on a trip around Europe and have collected currencies from
the different countries that you have travelled.
You are to write a simple money counting program. Your program will be able
to deal in the following three currencies
    a) Pakistani Rupee
    b) Turkish Lira
    c) Pound Sterling
 You must make a class called Currency. Create its data members and any
member functions you require. Your class should be written such that you
are able to execute statements like these in your main function:

        C_Sum =100 C1 + 11 (C2) + 56 (C3)
        
where C1, C2 and C3 represent different currency bank notes.

      C1%3 - displays C1 amount in all three currencies.
      C1 [“pkr”]– displays the C1 amount in PKR along with the date and current exchange rate of the input currency with pkr.
      C1 [“gbp”]– displays the C1 amount in Pound Sterling along with the date and current exchange rate between the input currency and pounds.
  
A few guidelines:
     This question involves operator overloading and needs to be
    accomplished using classes.

     Your main function must be as small as possible. This implies you must
    use class constructors and class functions to accomplish everything.

     Make a separate class called Conversion_Rate. Use constructors to take
    inputs for the exchange rate for the day. Display them every time you
    display the total sum.

     Every time you perform a money conversion, your program must contact
    the Conversion_Rate class class to provide the exchange rates for the
    given day. You are to apply the concept of friend functions/ friend
    classes (as you need) to allow this class to share its information.
