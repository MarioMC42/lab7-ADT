/*
 * Course: COEN 2220 - Programming 2
 * Name: Mario A. Marrero Colon
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: 01/oct/2026
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * TODO (Part C): Describe the study session durations managed by this ADT.
 * The study session durations managed by this ADT are stored in an array of fixed capacity.
 * Operations: 
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * addSession(minutes): Adds a new study session with the inputted duration in minutes.
 * TODO (Part C): Describe totalMinutes().
 * totalMinutes(): Returns the total number of minutes of all stored study sessions. The precondition is that the log contains at least one session.
 * TODO (Part C): Describe longestSession() and its precondition.
 * longestSession(): Returns the duration of the longest study session. The precondition is that the log contains at least one session.
 * Longest session compares the session durations and returns the longest one.
 * TODO (Part C): Describe size() and isEmpty().
 * size(): Returns the number of sotred sessions.
 * The precondition for size() and isEmpty() is that the log has been initialized.
 * isEmpty(): Returns true if the log contains no sessions, false if it contains at least one session.
 */
class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    const int CAP = 4; 
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    int sessionMinutes[CAP];
    // TODO (Part D): Add an int that tracks how many study sessions are stored.
    int numSessions;

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    // TODO (Part D): Write totalMinutes as a const member function.
    // TODO (Part D): Write longestSession as a const member function.
    // TODO (Part D): Write size as a const member function.
    // TODO (Part D): Write isEmpty as a const member function.
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}