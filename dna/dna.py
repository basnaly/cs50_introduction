import csv
import sys

def main():

    # TODO: Check for command-line usage

    if (len(sys.argv) != 3):
        print("Usage: python dna.py data.csv sequence.txt \n")

    # TODO: Read database file into a variable

    db = []
    with open(sys.argv[1]) as file:
        reader_db = csv.DictReader(file)

        for row in reader_db:
            db.append(row)

    subsequences = list(db[0].keys())[1:]
    print(db)

    # TODO: Read DNA sequence file into a variable

    with open(sys.argv[2], "r") as file: # file = open(sys.argv[2], "r")
        sequence = file.read()
    # dict[key] = value

    dna_dict = {} # {"AGATC": 28}

    # TODO: Find longest match of each STR in DNA sequence

    for i in range(len(subsequences)):
        number = longest_match(sequence, subsequences[i])
        dna_dict[subsequences[i]] = number
    print(dna_dict)

    # TODO: Check database for matching profiles

    # for person in db:
    #     for i in range(len(subsequences)):
    #         if dna_dict[subsequences[i]] == db[i].keys:
    #             print(db[i].name)
    #         else:
    #             print("No match ")

    for object in db:
        print("object: ", object)
        for subsequence in dna_dict:
            print("subsequence: ", subsequence)
            print("dna_dict: ", dna_dict)
            if dna_dict[subsequence] != int(object[subsequence]):
                break

    print("No match ")


    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


# main()
