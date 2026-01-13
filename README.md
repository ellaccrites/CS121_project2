# CS121_project2

#Algorithm for Number Guesser Game

make main():
    make char with length 20 called userName
    print a small greeting and ask for a name
    put user input in userName
    print a personalized greeting and a comment about starting the game

    seed random generator
    generate a random number between 1 - 100
    put random number in integer called correct
    
    create integer called keepGoing with value -1 (true)
    create integer called turns
    initialize turns at 0

    create while(keepGoing) loop:
        ask for a guess from user and put input into integer called guess

        if guess is less than correct:
            print "Too low"
        end if
        if guess is more than correct:
            print "Too high"
        end if         
        if guess is equal to correct:
            print "You got it!"
            make keepGoing false (0)
        end if
    end while

    print the number of guesses the user made (turns)

    if turns is less than 7:
        print "Great job!"
    if turns is greater than 7:
        print "Poor performance. Try for harder next time."
    if turns is euqal to 7:
        print "Average."

    return 0
end main

