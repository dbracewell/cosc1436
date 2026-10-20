You have just been hired as the new Quartermaster for the local Adventurer's Guild. When heroes return from their quests, they quickly scribble their results onto a piece of scrap parchment, which the Guild's magical system automatically digitizes into a raw text file. Your job is to process these messy logs and generate an official payout receipt.

## The Scenario

The system generates a file named quest_log.txt. This file contains a single line of text with four pieces of information separated by spaces:

1. Adventurer's Name (A single word, e.g., Gimli)
2. Monster Type Defeated (A single word, e.g., Goblins)
3. Bounty per Monster (A whole number of gold coins, e.g., 15)
4. Total Monsters Defeated (A whole number, e.g., 42)

You must write a C++ program that reads this raw data, calculates the total gold owed to the adventurer, and writes a formalized sentence to a brand new file named payout.txt.

## Mission Objectives

1. Include the Right Headers: You will need <iostream>, <string>, and importantly, the <fstream> header file to handle file input and output.
2. Open the Input Stream: Declare an ifstream variable and associate it with quest_log.txt to read the data.
3. Open the Output Stream: Declare an ofstream variable and associate it with payout.txt to write the data. Remember, opening a file this way will delete any existing content inside it.
4. Extract the Data: Create variables of the correct data types (string and int) and use the stream extraction operator (>>) to read the four values from the file sequentially.
5. Calculate & Write: Multiply the bounty by the number of monsters defeated. Then, use the stream insertion operator (<<) to write the following formatted sentence to your output file:
   - Example Output: Pay Gimli 630 gold for defeating 42 Goblins.
