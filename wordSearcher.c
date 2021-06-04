#include <stdio.h>

int main()
{
    char sentence[100];
    char word[100];
    int sentenceLength = 0;
    int wordLength = 0;
    int wordCount = 0;
    int sentencePointer, characterCounter;

    printf("Please enter the sentence\n");
    gets(sentence);

    printf("Please enter the word\n");
    gets(word);

    while (sentence[sentenceLength] != '\0')
    {
        sentenceLength++;
    }

    while (word[wordLength] != '\0')
    {
        wordLength++;
    }

    for (int i = 0; i < sentenceLength; i++)
    {
        sentencePointer = i;
        characterCounter = 0;

        for (int j = 0; j < wordLength; j++)
        {
            if (sentence[sentencePointer] == word[j])
            {
                sentencePointer++;
                characterCounter++;
            }
            else
                break;
        }

        if (characterCounter == wordLength)
        {
            printf("Sentence contains that word\n");
            printf("[%d-%d]\n", sentencePointer - wordLength + 1, sentencePointer);
            wordCount++;
        }

    }

    if (!wordCount)
        printf("Sentence does not contain that word\n");

    return 0;
}
