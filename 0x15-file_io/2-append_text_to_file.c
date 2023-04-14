#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int e = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[e] != '\0')
	{
		e++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, e);

	return (1);
}
