#include <iostream>

int main() {

    std::cout << "This is a very large paragraph.\n";
    std::cout << "This is a very large paragraph.\n";
    std::cout << "This is a very large paragraph.\n";
    std::cout << "This is a very large paragraph.\n";

    char choice1;

    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        std::cout << "Enter A\n";
        std::cout << "Enter B\n";
        std::cout << "Enter C\n";
        std::cin >> choice1;

    }

    switch (choice1) {

        case 'A':
            std::cout << "Temporary\n";
            break;

        case 'B':
            std::cout << "Temporary\n";
            return 0;

        case 'C':
            std::cout << "Temporary\n";
            break;

        default:
            std::cout << "Temporary\n";
            return 0;

    }

    std::cout << "This is a temporary phrase.\n";
    std::cout << "This is a temporary phrase.\n";
    std::cout << "This is a temporary phrase.\n";
    std::cout << "This is a temporary phrase.\n";

    char choice2;
    
    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        std::cout << "Enter A\n";
        std::cout << "Enter B\n";
        std::cout << "Enter C\n";
        std::cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        std::cout << "Temporary\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice2 == 'B') {

        std::cout << "Your stomach rumbles audibly, interrupting the interrogation.\n";
        std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
        std::cout << "'I did what?' you ask.\n";
        std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
        std::cout << "Several cards dressed as guards carry you off to be executed.\n";
        std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
        std::cout << "THE END\n";
        return 0;

    }

    char choice3;
    
    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

        std::cout << "Enter A\n";
        std::cout << "Enter B\n";
        std::cout << "Enter C\n";
        std::cin >> choice3;

    }

    if (choice3 != 'A' && choice3 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice3 == 'A') {

        std::cout << "You leave the court room in search of a way home.\n";
        std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
        std::cout << "THE END\n";
        return 0;

    }

    char choice4;
    
    for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

        std::cout << "Enter A\n";
        std::cout << "Enter B\n";
        std::cout << "Enter C\n";
        std::cin >> choice4;

    }

    if (choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice4 == 'A') {

        std::cout << "'Here!' You jump up in such a hurry that you knock over the jury box with the edge of your skirt.\n";
        std::cout << "The jury is scattered across the floor.\n";
        std::cout << "'The trial cannot proceed,' says the King accusingly, 'until all the jurymen are back in their proper places.'\n";
        std::cout << "You hastily put as many jury members back in place as you can";

    } else if (choice4 == 'C') {

        std::cout << "All eyes turn to you, except for the King and Queen.\n";
        std::cout << "'That's Alice,' the Gryphon points you out helpfully, even as you glare at him.\n";

    }

    char choice5;

    for (int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {

        std::cout << "Enter A\n";
        std::cout << "Enter B\n";
        std::cout << "Enter C\n";
        std::cin >> choice5;

    }

    switch (choice5) {

        case 'A':
            std::cout << "You leave the court room in search of a way home.\n";
            std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
            std::cout << "THE END\n";
            return 0;

        case 'B':
            std::cout << "'I'm not a mile high,' you say.\n";
            std::cout << "'Nearly TWO miles high,' says the Queen of Hearts.\n";
            std::cout << "'Well, I shan't go at any rate,' you reply.\n";
            std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
            std::cout << "'I won't!' you retort.\n";
            std::cout << "'Off with her head!' the Queen shouts at the top of her voice.\n";
            std::cout << "'Who cares?' you ask, realizing how small everyone has become. 'You're nothing but a pack of cards!'\n";
            break;

        case 'C':
            std::cout << "'Stuff and nonsense!' you yell, as you flip over the jury box - this time on purpose.\n";
            std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
            std::cout << "'I'll do no such thing!' you retort.\n";
            std::cout << "You scoop up the remaining tarts, which now appear to be very small, and shove them all in your mouth.\n";
            std::cout << "You hear the Queen cry, 'Off with her head!' as you begin to storm out of the court.\n";
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;
    }

}