// Exercise 5 - Pointers to Functions, Functors, Lambda Expressions, and Exceptions
// 2024/10/01 - If this code works, it was created by Cornel
//            - If it doesn't work, I don't know who wrote it.
// 2024/10/01 - See above

#ifndef SENECA_MESSAGE_H
#define SENECA_MESSAGE_H
#include <string>

namespace seneca
{
	/// <summary>
	/// Stores information about an email message.
	/// </summary>
	struct Message
	{
		/// <summary>
		/// The email address of the person who receives the message.
		/// </summary>
		std::string m_toAddress;

		/// <summary>
		/// The email address of the person who sent the message.
		/// </summary>
		std::string m_fromAddress;

		/// <summary>
		/// The name of the person who sent the message.
		/// </summary>
		std::string m_fromName;

		/// <summary>
		/// The subject of the message.
		/// </summary>
		std::string m_subject;

		/// <summary>
		/// The date and time of this email.
		/// </summary>
		std::string m_date;
	};
}
#endif
