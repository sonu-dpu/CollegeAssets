**Unbuffered Channel in Go – Library Book Request System**

An **unbuffered channel in Go** is used for direct communication between two goroutines (lightweight threads in Go). It works in a way where **data can only be sent when another goroutine is ready to receive it**. Because the channel has **no storage or buffer**, the sender must wait until the receiver accepts the data.

In a **Library Book Request System**, this concept can be used to handle book requests from students. When a student sends a request for a book, the request is passed through an unbuffered channel to the librarian system. Since the channel cannot store requests, the student’s request will wait until the librarian system receives it. This ensures that every request is handled immediately and no request is skipped.

Once the librarian receives the request, the system checks if the book is available. If it is available, the book is issued to the student and the record is updated in the library database. If the book is not available, the system can notify the student or add them to a waiting list.

Using an unbuffered channel in this situation helps the system maintain **real-time communication, accurate record management, and proper coordination** between the student request process and the librarian processing system. It also ensures that requests are processed one at a time without being lost or delayed.
