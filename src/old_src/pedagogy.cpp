//doubles//

void teach(choice){
switch(choice)
case 1:
cout	<< "*******************************************************************************\n"
	<< "| \n"
	<< "| When you double a number, you can just add the number to itself:\n"
        << "| To double 3, just add 3 to itself. Since 3+3=6, when you double 3, you get 6!\n"
        << "| Do you think that 6 is twice as big as 3? Look: (***) + (***) = (******)!\n" 
        << "| Here comes one for you to try! If you have any questions, press 'h' for a hint\n"
	<< "| \n"
	<< "*******************************************************************************"
	<< endl;
break;

//doubles +/- 1//
case 2:
cout    << "*******************************************************************************\n"
	<< "| \n"
        << "| Now you are AWESOME at doubling numbers. But what if someone asked you, \n"
        << "| What is 6+7? You already know how to double 6: you just add it to itself.\n"
        << "| That would be 6+6...but here we have 6+7, which is just 1 more than 6+6! \n"
        << "| Since 6+6=12, and 6+7 is just one more than 6+6, what do you think 6+7 is? \n"
        << "| Give it a try, and just press 'h' if you need a hint!\n"
	<< "| \n"
        << "*******************************************************************************"
        << endl;
break;

//10 Combos//
case 3:
cout	<< "*******************************************************************************\n"
	<< "| \n"
	<< "| 9 plus what makes 10? 9+1! 8 plus what makes 10? 8+2! 7 plus what makes 10? 7+3! \n" 
	<< "| Notice a pattern?
	<< "| \n"
	<< "| 0 + 10= 10	|oooooooooo\n"
	<< "| 1 + 9 = 10 	x|ooooooooo\n"
	<< "| 2 + 8 = 10 	xx|oooooooo\n"
	<< "| 3 + 7 = 10 	xxx|ooooooo\n"
	<< "| 4 + 6 = 10 	xxxx|oooooo\n"
	<< "| 5 + 5 = 10 	xxxxx|ooooo\n"
	<< "| 6 + 4 = 10 	xxxxxx|oooo\n"
	<< "| 7 + 3 = 10 	xxxxxxx|ooo\n"
	<< "| 8 + 2 = 10 	xxxxxxxx|oo\n"
	<< "| 9 + 1 = 10 	xxxxxxxxx|o\n"
	<< "| 10+ 0 = 10 	xxxxxxxxxx|\n"
	<< "| \n"
	<< "| What two numbers add up to 10? Well, we know can double 5 to make 10: 5+5=10 \n"
	<< "| What if we made one 5 bigger and one 5 smaller? What number comes before 5? \n"
	<< "| What number comes after 5? Since 5+5=10, then 4+6=10! We can do it again:\n"
	<< "| What number comes before 4? What number comes after 4? Since 4+6=10, 3+7=10!\n" 
	<< "| \n"
	<< "*******************************************************************************"
	<< endl;
break;


//Working with 10//
case 4:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| In this level, place value is important. Do you know place value? Let's see: \n"
	<< "| In the number 17, what number is in the 10s place? What about the 1s place?\n"
	<< "| How do you know?\n"
	<< "| \n"
	<< "| Let's count from zero to 10: 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, ... 10 \n"
	<< "| Now let's go from 10 to 20: 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, ... 20 \n"
	<< "| What about doing 20 to 30:  20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ... 30!\n"
	<< "| \n"
	<< "| Going across each row, the number in the ones place goes up by 1 each time\n"
	<< "| Going down each column, the number in the tens place goes up by 1 each time\n"
	<< "| When the number in the 10s place goes up by 1, the number is 10 bigger! \n"
	<< "| \n"
	<< "| Here's an example: 23. What does the 2 mean in the number 23? \n"
	<< "| It means there are 2 tens! What does the 3 mean? It means there are 3 ones!\n"
	<< "| 23 is the same as 2x10 + 3x1, or 10+10+1+1+1 (two tens and three ones)!\n"
	<< "| \n"
	<< "| So, if we have 10 + 6, we have to add the 1s places and 10s places separately\n"
	<< "| Six has 6 in the ones place; what does 10 have in the one's place? Zero!\n"
	<< "| So let's add them 6 to 10 to make 16! The 10s place doesn't change because \n"
	<< "| we only have one whole 10 (and six ones). How many more 1s do we need to \n"	
	<< "| get another 10? If we add 4 more 1s, 16+4=20. Two whole tens (no extra 1s)!\n"
	<< "| \n"
	<< "| This is one reason it's easy to add like this:     10 \n"
	<< "|						        + 6 \n"
	<< "|						       -----\n"
	<< "| It lines up the places for us! \n"
	<< "******************************************************************************"
	<< endl;
break;

//How Far Apart//
case 5:
cout 	<< "******************************************************************************\n"
	<< "| It might sound weird, but if someone asks you 'what is 9 take away 2', they\n"
	<< "| want to know how far away 9 is from 2. Think about a number line:\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  \n"
	<< "|  |___|___|___|___|___|___|___|___|___|___...\n"<<endl;
getch();
cout	<< "| 	       \__/\__/\__/\__/\__/\__/\__/\n"
	<< "| 	         1   2   3   4   5   6   7\n"<<endl;
getch();
cout	<< "| \n"
	<< "| So 9 is 7 more then 2! 9 and 2 are 7 apart! And, 9-2=7!\n"
	<< "| It is even easier when the numbers are close together. '8-5' is the same as\n"
	<< "| 'how far apart are 8 and 5?' Start at five, count up to eight. What did you get?\n"
	<< "| \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;
//Breakdown//
case 6:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| These questions are a lot like the ones in Level 5 (how far apart). They will \n"
	<< "| look like this 7 - ___ = 3. Seven take away SOMETHING equals 3. Your job is to\n"
	<< "| figure out what that SOMETHING is. What goes in the blank? Well, the equals sign\n"
	<< "| means that the stuff on the left equals the stuff on the right. How far apart\n"
	<< "| are 3 and 7? Does that fit in the blank? Try it!\n"
	<< "| \n"
	<< "| There may also be some with addition, like this: 3 + ___ = 8. Three plus SOMETHING\n"
	<< "| equals 8. Well, how far apart are 3 and 8? Does that work in the blank? HA!\n"
	<< "| \n"
	<< "| As you've probably noticed, these problems are very similar to 'how far apart'!\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;


//Crossing 10//
case 7:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| This may be the last level, but it is DEFINITELY THE MOST IMPORTANT LEVEL\n"
	<< "| It uses all of the skills from Levels 1-6 and it is SUPER IMPORTANT. Let's go!\n"
	<< "| \n"
	<< "| We can cross over ten using addition (8+4) or subtraction (15-9), and we have\n"
	<< "| two different techniques for each of these. Let's start with the addition:\n"
	<< "| \n"
	<< "| Our strategy will use '10 combos'...we will make 10 and add what's leftover:\n"
	<< "| For 8+4, STOP! Take the first number, 8. What number plus 8 makes 10?\n"
	<< "| 8+2 is 10, but we have to add 4, not just 2. How much bigger is 4 than 2? \n"
	<< "| 4-2 is 2, so we have to add 2 more! 8+4 = 8+2+2 = 10+2 = 12!\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14\n"
	<< "|  |___|___|___|___|___|___|___|___|___|___|___|___|___|___|...\n"<<endl;
getch();
cout	<< "| 	                               \______/\______/\n"
	<< "| 	         			   2       2\n"<<endl;
getch();
cout	<< "| We want 8 plus 4; we know 8 plus 2 is 10, so 10 plus the leftover (4-2=2) is 12!\n"
	<< "| \n";
getch();
cout	<< "| \n"
	<< "| For subtraction, our strategy is different. Let's use 'how far apart' with\n"
	<< "| 10 in the middle! Pretend we have 16-9. How far apart are 16 and 10? (6).\n"
	<< "| Now, how far apart are 9 and 10? (1). Add those together (6+1=7) and you got it!\n"
	<< "| 16 - 9 = 7\n"
	<< "| Why does that work? Well, check out this number line:\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18 \n"
	<< "|  |___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|...\n"<<endl;
getch();
cout	<< "| 	                                   \__/\_____________________/\n"
	<< "| 	         			    1             6\n"<<endl;
getch();
cout	<< "| 9 up to 10 is just 1, and 10 up to 16 is just 6. Thus, 9 up to 16 is 1+6=7\n"	
	<< "| \n"
	<< "| \n"
	<< "| Let's try a couple to get the feel for it\n"
	<< "| \n"
	<< "| 
	<< "******************************************************************************"
	<< endl;
break;	
}
}


void hint(choice){

switch(choice){
case 1: 
cout 	<< "*******************************************************************************\n"
	<< "| \n"
	<< "| Double 5, and you get 10. That means if we double anything bigger than 5,\n"
     	<< "| the answer is BIGGER than 10. A good way to double a big number is to break\n"
     	<< "| 5 off, double the 5, double whatever was leftover, and put them back together\n"
     	<< "| For example, to double 9, turn 9 into 5 plus something. Five plus what is 9? 4!\n"
     	<< "| So 5+4=9. The equal sign means both sides are the same, so if you want to\n"
     	<< "| double 9, you double 5 and double 4, then add them together. Double 5 is 10,\n"
     	<< "| and double 4 is 8, so (5+5) + (4+4) = 10 + 8 = 18!\n" 
	<< "| \n"
	<< "*******************************************************************************"
	<< endl;
break;

//hint doubles +- 1//
case 2:
cout	<< "******************************************************************************\n"
	<< "| \n"
	<< "| We talked about 'doubles plus 1' where 6+6=12, so 6+7=13. But it works \n"
	<< "| backwards too! Say you have 8+7. If you know your doubles, you know that \n"
	<< "| 8+8=16. But here you have 8+7, which is 1 less! Since 7 is 1 less than 8 \n"
	<< "| 8+7=15! Keep up the good work, and keep practicing!\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

 //hint 10s combos//
case 3:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| Here's a cool trick: you only actually have to remember 4 pairs of numbers!\n"
	<< "| 1 goes with 9, 2 goes with 8, 3 goes with 7, 4 goes with 6. That's it!\n"
	<< "| Since you already know 5+5 and 10+0, that's all you have to remember!\n"
	<< "| 9 goes with 1, 8 goes with 2, 7 goes with 3, 6 goes with 4. You got it!\n"
	<< "| Here's all the possible pairs of numbers that make 10:\n"
	<< "| (10,0) (0,10) (9,1) (1,9) (2,8) (8,2) (3,7) (7,3) (4,6) (6,4) (5,5)\n"
	<< "| \n"
	<< "| Great work! Keep it up!\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//working with 10 hint//
case 4:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| Hey, how's it going? \n"
	<< "| So far you've tried"<< totnum[4]<<"questions! Have you notice any patterns? 
	<< "| All of the questions have you add 10 plus a single digit number (like 4).\n"
	<< "| When you have 10 + 4, the 4 just goes in the place where the zero is, so\n"
	<< "| 10 + 4 = 14. In fact, it's called 'Four-teen' because its a 4 and a 10!\n"
	<< "| Even though 'teen' is a weird way to say 'ten', it's a good way to remember!\n"
	<< "| All of the 'teens' are like that: 'eighteen' (18) = 'eight' (8) + 'ten' (10)\n"
	<< "| \n"
	<< "| Also, when we add two numbers, the order DOESN'T matter. 10+6 = 6+10 = 16!\n'
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//hint how far apart//
case 5:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| Sometimes it's easier to think 'how much is left'. In our 9-2 example, it is\n"
	<< "| a little easier to think 'how much is left when you take 2 away from 9'. \n"
	<< "| You get the very same answer when you do it this way, and it is 100% OK!\n"
	<< "| \n"
	<< "| The toughest ones are probably 9-2, 7-3, 8-3, 9-4. Can you do them in your head?\n";
getch();
cout	<< "| Here are the answers: 9-2=7, 7-3=4, 8-3=5, 9-4=5\n"
	<< "| Practice those and you'll have it down perfectly in no time at all!\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//hint for breakdown//
case 6:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| You can also think about these questions using algebra! It's not bad, I promise!\n"
	<< "| What about 3 + __ = 8. Eight equals 3 plus SOMETHING. If we want to know what\n"
	<< "| SOMETHING is, we can subtract 3 from both sides.\n"
	<< "| \n"
	<< "|  3 + ___ = 8\n"
	<< "| -3        -3\n"
	<< "| ---       ---\n"
	<< "|      ___ = 5\n"
	<< "| \n"
	<< "| So 5 goes in the blank! There are many different ways do do these problems!\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

case 7:
cout 	<< "******************************************************************************\n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;
}
}
