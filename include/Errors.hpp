#ifndef ERRORS_HPP
# define ERRORS_HPP

# define RPL_WELCOME(nick, user, host) ("001 " + nick + " :Welcome to the Internet Relay Network " + nick + "!" + user + "@" + host + "\r\n")
# define PING(localhost) ("PING " + localhost + "\r\n")
# define PONG(localhost) ("PONG " + localhost + "\r\n")
# define QUIT_REASON(nick, user, host, msg) (nick + "!" + user + "@" + host  + " QUIT :" + msg + "\r\n")
# define QUIT(nick, user, host) (nick + "!" + user + "@" + host  + " QUIT\r\n")
# define NICK(old_nick, nick) (":" + old_nick + " NICK " + nick + "\r\n")
# define NICK_INFORM(old_nick, user, host, nick) (":" + old_nick + "!" + user + "@" + host + " NICK " + nick + "\r\n")
# define JOIN(nick, user, host, chan) (":" + nick + "!" + user + "@" + host  + " JOIN " + chan + "\r\n")
# define PRIVMSG(nick, user, host, dest, str) (":" + nick + "!" + user + "@" + host + " PRIVMSG " + dest + " :" + str + "\r\n") //dest cest le nom du channel
# define NOTICE(nick, user, host, chan, str) (":" + nick + "!" + user + "@" + host + " NOTICE " + chan + " :" + str + "\r\n")
# define PART(nick, user, host, chan) (":" + nick + "!" + user + "@" + host + " PART " + chan + "\r\n")
# define PART_REASON(nick, user, host, chan, reason) (":" + nick + "!" + user + "@" + host + " PART " + chan + " :" + reason + "\r\n")
# define KILL(nick, target) (":" + nick + " KILL " + target + "\r\n")
# define KILL_REASON(nick, target, reason) (":" + nick + " KILL " + target + " :" + reason + "\r\n")
# define BANNED(nick, user, host, channel, target) (":" + nick + "!" + user + "@" + host + " MODE " + channel + " +b " + target + "\r\n")
# define KICK(nick, user, host, chan, kicked, reason) (":" + nick + "!" + user + "@" + host + " KICK " + chan + " " + kicked + " :" + reason + "\r\n")
# define INVITE(nick, user, host, nickinvite, channel)  (":" + nick + "!" + user + "@" + host + " INVITE " + nickinvite + " " + channel + "\r\n")
# define RPL_NOTOPIC(nick, user, host, chan) ("331 " + nick + "!" + user + "@" + host + " " + chan + " :No topic is set\r\n")
# define TOPIC(nick, user, host, chan, topic) (":" + nick + "!" + user + "@" + host + " TOPIC " + chan + " :" + topic + "\n\r")
# define RPL_TOPIC(nick, user, host, chan, topic) ("332 " + nick + "!" + user + "@" + host + " " + chan + " :" + topic + "\r\n")
# define RPL_TOPICWHOTIME(nick, chan, whoset, user, setat) ("333 " + nick + " " + chan + " " + whoset + "!" + user + "@localhost " + setat + "\r\n")
# define ERR_ALREADYREGISTERED "462 :You may not reregister\r\n"
# define ERR_NEEDMOREPARAMS(command) (std::string("461 ") + command + " :Not enough parameters\r\n")
# define ERR_PASSWDMISMATCH "464 :Password incorrect\r\n"
# define ERR_NONICKNAMEGIVEN "431 :No nickname given\r\n"
# define ERR_ERRONEUSNICKNAME(nick) ("432 " + nick + " :Erroneous nickname\r\n")
# define ERR_NICKNAMEINUSE(to, nick) ("433 " + to + " " + nick + " :Nickname is already in use\r\n")
# define ERR_NOSUCHNICK(invitenick) ("401 " + invitenick + " :No such nick/channel\r\n")
# define ERR_NOSUCHCHANNEL(channel) ("403 " + channel + " :No such channel\r\n")
# define RPL_YOUREOPER(nick) ("381 " + nick + " :You are now an IRC operator\r\n")
# define ERR_BADCHANMASK(channel) ("476 " + channel + " :Bad Channel Mask\r\n")
# define ERR_NOPRIVILEGES "481 :Permission Denied- You're not an IRC operator\r\n"
# define ERR_BANNEDFROMCHAN(nick, channel) ( "474 " + nick + " " + channel + " :Cannot join channel (+b)\r\n")
# define ERR_CHANNELISFULL(nick, channel) ("471 " + nick + " " + channel + " :Cannot join channel (+l)\r\n")
# define ERR_TOOMANYCHANNELS(nick, channel) ("405 " + nick + " " + channel + " :You have joined too many channels\r\n")
# define RPL_NAMREPLY(nick, user, host, channel) ("353 " + nick + "!" + user + "@" + host + " = " + channel + " :")
# define RPL_ENDOFNAMES(nick, user, host, channel) ("366 " + nick + "!" + user + "@" + host + " " + channel + " :End of NAMES list\r\n")
# define RPL_INVITING(nick, user, host, invitenick, channel) ("341 " + nick + "!" + user + "@" + host + " " + invitenick + " " + channel + "\r\n")
# define ERR_USERNOTINCHANNEL(nick, chan) ("441 " + nick + " " + chan + " :They aren't on that channel\r\n")
# define ERR_NOTONCHANNEL(chan) ("442 " + chan + " :You're not on that channel\r\n")
# define ERR_CHANOPRIVSNEEDED(chan) ("482 " + chan + " :You're not channel operator\r\n")
# define ERR_INVITEONLYCHAN(nick, chan) ("473 " + nick + " " + chan + " :Cannot join channel (+i)\r\n")
# define RPL_NAMREPLY(nick, user, host, channel) ("353 " + nick + "!" + user + "@" + host + " = " + channel + " :")
# define ERR_CANNOTSENDTOCHAN(nick, chan) ("404 " + nick + " " + chan + " :Cannot send to channel\r\n")
# define ERR_USERSDONTMATCH(nick) ("502 " + nick + " :Cannot change change mode for other users\r\n")
# define ERR_USERONCHANNEL(nick, invitenick, chan) ("443 " + nick + " " + invitenick + " " + chan + ":is already on channel\r\n")
# define ERR_NORECIPIENT(command) ("411 :No recipient given " + command + "\r\n") 
# define ERR_NOTEXTTOSEND "412 :No text to send\r\n"
# define ERR_NOSUCHNICK(invitenick) ("401 " + invitenick + " :No such nick/channel\r\n")
# define ERR_TOOMANYTARGETS(target, msg) (target + ":407 recipients. " + msg + " ⚠️ \r\n") 
//⚠️ 

#endif