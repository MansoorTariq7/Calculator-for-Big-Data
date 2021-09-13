#include <iostream>
using namespace std ;

int input ( int [] , int [] , int ) ;
int addition ( int [] , int [] , int [] , int ) ;
int subtraction ( int [] , int [] , int [] , int ) ;
int multiplication ( int [] , int [] , int [] , int ) ;
void division () ;
void mod () ;

int main ()

{
	const int size = 20 ;
	int array [ size ] = { 0 } ;
	int array2 [ size ] = { 0 } ;
	int arrayadd [ size ] = { 0 } ;
	int arraysubtract [ size ] = { 0 } ;
	
	int arraymultiply [ size ] = { 0 } ; 
	int counter = 0 ;
	char choice ;
	
	while ( choice != 'E' )
	{
		cout << " ENTER ''A'' FOR ADDITION " << endl ;
		cout << " ENTER ''S'' FOR SUBTRACTION " << endl ;
		cout << " ENTER ''M'' FOR MULTIPLICATION " << endl ;
		cout << " ENTER ''D'' FOR DIVISION " << endl ;
		cout << " ENTER ''O'' FOR MODOLOUS " << endl ;
		cout << " ENTER ''E'' TO END THE PROGRAM " << endl ;
		
		cin >> choice ;
		
		switch ( choice )
		{
			case 'A' :
			input ( array , array2 , size ) ;
			addition ( array , array2 , arrayadd , size ) ;
			cout << endl ; 
			break ;
			case 'S' :
			input ( array , array2 , size) ;
			subtraction ( array , array2 , arraysubtract , size ) ;
			cout << endl ;
			break ;
			case 'M' :
			input ( array , array2 , size ) ;
			multiplication ( array , array2 , arraymultiply , size ) ;
			while ( counter < size )
			{
				cout << arraymultiply [ counter ] ;
				counter = counter + 1 ;
			}
			cout << endl ;
			break ;
			case 'D' :
			division () ;
			cout << endl ;
			break ;
			case 'O' :
			mod () ;
			cout << endl ;
			break ;
			case 'E' :
			cout << " THANK YOU FOR USING THE PROGRAM " ;
			break ;
			default :
			cout << " ENTER AGAIN :: YOU ENTERED WRONG CHOICE " << endl ;
			break ;

		}

	}
	
}
// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2
int input ( int array [] , int array2 [] , int size )

{
	int counter = 0 ;
	
	cout << " ENTER THE FIRST 20 DIGIT NUMBER " << endl ;
	
	while ( counter < size )
	{
		cin >> array [ counter ] ;
		counter = counter + 1 ;
	}
	
	counter = 0 ;
	
	cout << " ENTER THE SECOND 20 DIGIT NUMBER " << endl ;
	
	while ( counter < size )
	{
		cin >> array2 [ counter ] ;
		counter = counter + 1 ;
	}

}

int addition ( int array [] , int array2 [] , int arrayadd [] , int size )

{
	int check = 0 ;
	int check1 = 0 ;
	int check2 = 0;
	int check3 = 0 ;
	int counter = 0 ;
	int answercounter = 0 ;
	counter = size - 1 ;
	
	while ( counter >= 0 )
	{	
		check = array [ counter ] ;
		check2 = array2 [ counter ] ;
		
		check = check + check2 ;
		
		
		if ( check >= 10 && counter > 0 )
		{
			check1 = array [ counter - 1 ] ;
			check1 = check1 + 1 ;
			array [ counter - 1 ] = check1 ;
			
			check = check - 10 ;
			
		}
	
	
		arrayadd [ counter ] = check ;
		answercounter = answercounter + 1 ;
		counter = counter - 1 ;
		check = 0 ;
	}

	counter = 0 ;
	cout << " THE ADDITION IS = = : :  "  ; 

	while ( counter < answercounter )
	{
		cout << arrayadd [ counter ] ;
		counter = counter + 1 ;
	}
}

int subtraction ( int array [] , int array2 [] , int arraysubtract [] , int size )
{
	int check = 0 ;
	int check1 = 0 ;
	int check2 = 0;
	int check3 = 0 ;
	int counter = 0 ;
	int answercounter = 0 ;
	counter = size - 1 ;
	
	while ( counter >= 0 )
	{	
		
		check = array [ counter ] ;
		check2 = array2 [ counter ] ;
		
		if ( check < check2 && counter > 0 )
		{
			check1 = array [ counter ] ;
			check1 = check1 + 10 ;
			array [ counter ] = check1 ;
			
			check1 = 0 ;
			
			check1 = array [ counter - 1 ] ;
			check1 = check1 - 1 ;
			array [ counter - 1 ] = check1 ;
			
		}

		check = array [ counter ] ;
		check2 = array2 [ counter ] ;		
		check = check - check2 ;
		arraysubtract [ counter ] = check ;
		answercounter = answercounter + 1 ;
		counter = counter - 1 ;
		check = 0 ;
	}

	counter = 0 ;
	cout << " THE SUBTRACTION IS = = : :  " ; 

	while ( counter < answercounter )
	{
		cout << arraysubtract [ counter ] ;
		counter = counter + 1 ;
	}
}

int multiplication ( int array [] , int array2 [] , int arraymultiply [] , const int size )

{
	int arraycheck [ size ] = { 0 } ;
	int arraycheck1 [ size ] = { 0 } ;
	int counter = 0 ;
	int answercounter = 0 ;
	int counterone = 0 ;
	int check = 0 ;
	int check1 = 0 ;
	int check2 = 0;
	
	
	int f = size - 1 ;
	counter = size - 1 ;
	counterone = size - 1 ;
	while ( counter >= 0 )
	{	
		check2 = array2 [ counter ] ;

		while ( counterone >= 0 )
		{
			check = array [ counterone ] ;
			
			
			if ( check*check2 > 9 && counter >= 0 )
			{
				arraycheck[counterone]=((check*check2)%10)+check1 ;
				check1=0;
				check1=(check*check2)/10;
			}
			
			else
			{
				
				arraycheck [ counterone ] = check*check2+check1 ;
				check1= 0;
			}
			
			check = 0 ;
			
			
			if ( arraycheck [ counterone ] + arraymultiply [ f ] >= 10 )
			{
				arraymultiply [ f ] = arraycheck [ counterone ] + arraymultiply [ f ] ;
				arraymultiply [ f - 1 ] = arraymultiply [ f - 1 ] + 1 ;
				arraymultiply [ f ] = arraymultiply [ f ] - 10 ;			
			}
			else 
			{
				arraymultiply [ f ] = arraycheck [ counterone ] + arraymultiply [ f ] ;
			}
			counterone = counterone - 1 ;
			f = f - 1 ;
		}
	
		counterone = size - 1 ;
		counter = counter - 1 ;
		f = counter ;
	}
	counter = 0 ;
	cout << " THE MULTIPLICATION IS = = : :  " ; 
}
void division ()
{
	const int  size = 20 ;
	int array [ size ] = { 0 } ;
	int array2 [ size ] = { 0 } ;
	int arraydivision [ size ] = { 0 } ;
	int counter = 0 ;
	int check = 0 ;
	int check1 = 0 ;
	int check2 = 0 ;
	int check3 = 0 ;
	int n = 0 ;
	double check4 = 0 ;
	
	cout << " ENTER THE 1st ''20'' DIGIT NUMBER YOU WANT TO DIVIDE " << endl ;
	
	while ( counter < size )
	{
		cin >> array [ counter ] ;
		counter = counter + 1 ;
	}
	counter = 0 ;
	
	cout << " ENTER THE 2nd ''20'' DIGIT NUMBER YOU WANT TO DIVIDE ( DIVISER ) " << endl ;
	
	while ( counter < size )
	{
		cin >> array2 [ counter ] ;
		check3 = check3 + 1 ;
		if ( array2 [ counter ] != 0 && n == 0 )
		{
			check3 = 0 ;
			n = 1 ;
		}
		counter = counter + 1 ;
	}
	check3 = check3 + 1 ;
	check1 = size - check3 ;
	
	while ( check1 < size )
	{
		check2 = check2 * 10 + array2 [ check1 ] ; 
		check1 = check1 + 1 ;
	}
	counter = 0 ;
	
	int counterone = 0 ;
	
	while (  counterone < size )
	{
		check = check * 10 + array [ counterone ] ;
		
		if ( counterone < check3 )
		{
			check4 = check/check2 ;
			check3 = check3 + 1 ;
			check = check%check2 ;
			
		}
		arraydivision [ counter ] = check4 ;
		counter = counter + 1 ;
		check4 = 0 ;
		counterone = counterone + 1 ;
	}

	counterone = 0 ;
	
	cout << " THE DIVISION IS ( QUOTIENT ) = = : :  "  ; 
	
	while ( counterone < counter )
	{
		cout << arraydivision [ counterone ] ;
		counterone = counterone + 1 ;
	}

}

void mod ()

{
	const int  size = 20 ;
	int array [ size ] = { 0 } ;
	int array2 [ size ] = { 0 } ;
	int arrayans [ size ] = { 0 } ;
	int counter = 0 ;
	int check = 0 ;
	int check1 = 0 ;
	int check2 = 0;
	int check3 = 0 ;
	int n = 0 ;
	double check4 = 0 ;
	
	cout << " ENTER THE 1st ''20'' DIGIT NUMBER YOU WANT TO TAKE MODOLOUS OF " << endl ;
	
	while ( counter < size )
	{
		cin >> array [ counter ] ;
		counter = counter + 1 ;
	}
	counter = 0 ;
	
	cout << " ENTER THE 2nd ''20'' DIGIT NUMBER YOU WANT TO TAKE MODOLOUS OF " << endl ;
	
	while ( counter < size )
	{
		cin >> array2 [ counter ] ;
		check3 = check3 + 1 ;
		if ( array2 [ counter ] != 0 && n == 0 )
		{
			check3 = 0 ;
			n = 1 ;
		}
		counter = counter + 1 ;
	}
	check3 = check3 + 1 ;
	check1 = size - check3 ;
	
	while ( check1 < size )
	{
		check2 = check2 * 10 + array2 [ check1 ] ; 
		check1 = check1 + 1 ;
	}
	counter = 0 ;
	
	int counterone = 0 ;
	
	while ( counterone < size )
	{
	
		check = check * 10 + array [ counterone ] ;
		
		if ( counterone < check3 )
		
		{
			
			check4 = check/check2 ;
			
			check3 = check3 + 1 ;
		
			check = check%check2 ;
		
		}
		
		counterone = counterone + 1 ;
	
	}
	
	cout << " THE MODOLOUS ( REMAINDER ) OF YOUR QUESTION IS = = :: " << check ;
	
}