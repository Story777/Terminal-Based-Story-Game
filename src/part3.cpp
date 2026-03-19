#include "parts.h"
#include "util.h"


void part3aa()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Investigate your house when you wake up.", 1);
    showMessage("B. Call a real medium to know if there's really something supernatural.", 1);
    showMessage("C. Go on with your day.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You wake up after 2 hours, with a bad headache.", 4);

            showMessage("You decide to investigate your house completely.", 4);

            showMessage("You buy some paranormal-hunting devices, to help you with your "
                        "investigation.", 5);
            
            showMessage("As you're investigating, you hear some weird screeching noises, "
                        "although, very faint.", 5);
            
            showMessage("When you get to the kitchen, you see it. The creature. Staring "
                        "straight at you.", 5);

            break;


        case 'b':
            showMessage("You wake up and decide to take things up a notch.", 4);

            showMessage("You search for mediums (people who can talk with spirits) online.", 4);

            showMessage("You find one at a cheap price and decide to call them.", 4);

            showMessage("They arrive 1 hour later, and you tell them about everything "
                        "that has happened.", 5);

            showMessage("They agree to help and tell you to wait in the living room "
                        "while they communicate with the spirits.", 7);

            break;


        case 'c':
            showMessage("You wake up after 2 hours.", 4);

            showMessage("You decide to just ignore this monster-thing and go on with "
                        "your day.", 5);

            showMessage("You drink coffee, eat, and sit down to watch TV.", 4);

            showMessage("Suddenly, the news comes on, without any warning.", 4);

            showMessage("You get frightened, but see the news.", 4);

            showMessage("You see it. The creature on the news, absorbing anyone "
                        "it comes across.", 5);
            
            showMessage("You wonder, why didn't it harm you? ", 4);

            break;
    }
}


void part3ab()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Ignore it.", 1);
    showMessage("B. See if everything is ok in your house.", 1);
    showMessage("C. Use paranormal-detecting devices.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You decide to ignore what just happened and go on with your "
                        "day.", 5);

            showMessage("You're making coffee, when suddenly, your phone rings.", 4);

            showMessage("It's your friend, and when you pick it up, he talks about how "
                        "he wants you to see something he made.", 7);

            showMessage("You get interested on what he made, and ask him.", 4);

            showMessage("He tells you it's a secret and wants you to come fast.", 4);

            break;


        case 'b':
            showMessage("You decide to check if your house is normal or not.", 4);

            showMessage("You look around, all rooms, furniture, seems the same.", 4);

            showMessage("You take a sigh of relief and decide to chill.", 4);

            showMessage("You suddenly get a call from your friend, asking for you "
                        "to come see something he made.", 6);

            break;


        case 'c':
            showMessage("You decide to buy some paranormal-detecting devices online.", 4);

            showMessage("They arrive after a few days, and you use them to detect "
                        "anything unusual.", 5);

            showMessage("You check every room, but nothing seems wrong.", 4);

            showMessage("You feel relieved and decide to take rest, when suddenly "
                        "your friend calls you.", 5);

            showMessage("He tells you that he made something and wants to show it "
                        "to you.", 5);

            break;
    }
}


void part3ac()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Chill and watch something on the TV.", 1);
    showMessage("B. Order something to eat.", 1);
    showMessage("C. Chill with a friend.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You decide to calm your mind by binge-watching a show.", 4);

            showMessage("As you're watching, you get a call from your friend.", 4);

            showMessage("He tells you that he wants to show you something that he "
                        "made.", 5);

            showMessage("You're curious on what this could be.", 4);

            break;


        case 'b':
            showMessage("You get hungry after so much back-and-forth.", 4);

            showMessage("You decide to order something to eat.", 4);

            showMessage("As you're about to order, you get a call from your friend.", 4);

            showMessage("You pick it up, and he tells you that he wants to show you "
                        "something he made.", 5);
            
            break;


        case 'c':
            showMessage("You decide to call a friend of yours to chill with.", 4);

            showMessage("You wait around 20 minutes for him to arrive.", 4);

            showMessage("When he arrives, you guys decide to watch a movie "
                        "together.", 5);

            showMessage("After you're done watching, your friend tells you that "
                        "he wants to show you something which he made at his house.", 9);

            showMessage("He tells you, that once you're ready, he can show you.", 5);

            break;
    }
}


void part3ba()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Investigate again as a last resort.", 1);
    showMessage("B. Call a paranormal-hunting crew.", 1);
    showMessage("C. Try to forget about it.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}


void part3bb()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Call them again later.", 1);
    showMessage("B. Investigate yourself.", 1);
    showMessage("C. Go on with your day.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}


void part3bc()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Investigate later.", 1);
    showMessage("B. Tell your society's guards about it.", 1);
    showMessage("C. Go on with your day.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}


void part3ca()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Go to a park.", 1);
    showMessage("B. Go to the mall.", 1);
    showMessage("C. Go to a friend's house.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}


void part3cb()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Call the police.", 1);
    showMessage("B. Investigate your house.", 1);
    showMessage("C. Try to stay calm and wait.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}


void part3cc()
{
    showMessage("-------- PART 3 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Tell your friends.", 1);
    showMessage("B. Take a photo of it.", 1);
    showMessage("C. Try to catch it.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);

            break;


        case 'b':
            showMessage("...", 1);

            break;


        case 'c':
            showMessage("...", 1);

            break;
    }
}
