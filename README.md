It logs events(standard output)/errors(standard error) with given message and the current time(system generated) to the console(terminal).

No need to make any object. Just inlcude the ".hpp" file in your code. To log call:

EventLogger::logEvent("message");
EventLogger::logError("message");


TO DO:
1.	add logging to file.
2.	Two different files for general messages and errors.
