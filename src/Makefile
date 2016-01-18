# This the unix makefile to build j-alice with gnu make
# Right now its kinda silly, i'll make it fancier when i get a chance
# Author: Taras Glek
TARGETS=IrcResponder.o Database.o  Element.o Handler.o Kernel.o Main.o Match.o Memory.o Nodemaster.o Parser.o Socket.o ServerSocket.o StringTokenizer.o Substituter.o TemplateProcessor.o Utils.o HTTPProcessor.o TokenProxyListener.o SocketHandler.o Template.o PreParser.o Logger.o XmlSocketResponder.o AimlWriter.o
all: jalice
jalice: $(TARGETS) Makefile
	$(CXX) $(LDFLAGS) $(TARGETS) -o jalice
clean:
	rm -f jalice $(TARGETS)
Template.o: Template.cpp Template.h
Database.o: Database.cpp \
	Database.h
DllExporter.o: DllExporter.cpp \
	DllExporter.h \
	Kernel.h \
	Element.h \
	Pointer.h
Element.o: Element.cpp \
	Element.h \
	Pointer.h \
	Utils.h
FlashResponder.o: FlashResponder.cpp \
	FlashResponder.h \
	Responder.h \
	Element.h \
	Pointer.h
HTTPProcessor.o: HTTPProcessor.cpp \
	HTTPProcessor.h \
	AimlProcessor.h \
	Element.h \
	Pointer.h \
	ServerSocket.h \
	Socket.h \
	SocketHandler.h \
	Kernel.h \
	TokenProxyListener.h
Handler.o: Handler.cpp \
	Handler.h \
	AimlProcessor.h \
	Element.h \
	Pointer.h \
	Match.h \
	Responder.h \
	TemplateProcessor.h \
	BrProcessor.h \
	Kernel.h \
	IdProcessor.h \
	SrProcessor.h \
	BotProcessor.h \
	GetProcessor.h \
	Memory.h \
	Database.h \
	Utils.h \
	IrcProcessor.h \
	IrcResponder.h \
	Socket.h \
	SetProcessor.h \
	NameProcessor.h \
	SraiProcessor.h \
	StarProcessor.h \
	ThatProcessor.h \
	InputProcessor.h \
	LearnProcessor.h \
	Substituter.h \
	Parser.h \
	ThinkProcessor.h \
	FormalProcessor.h \
	StringTokenizer.h \
	PersonProcessor.h \
	RandomProcessor.h \
	SentenceProcessor.h \
	ThatstarProcessor.h \
	ConditionProcessor.h \
	LowercaseProcessor.h \
	NormalizeProcessor.h \
	TopicstarProcessor.h \
	UppercaseProcessor.h \
	HTTPProcessor.h \
	XmlSocketResponder.h \
	SecureProcessor.h	
IrcResponder.o: IrcResponder.cpp \
	IrcResponder.h \
	Responder.h \
	Element.h \
	Pointer.h \
	Socket.h \
	StringTokenizer.h \
	TokenProxyListener.h \
	Kernel.h \
	Utils.h \
	SocketHandler.h
Kernel.o: Kernel.cpp \
	Kernel.h \
	Element.h \
	Pointer.h \
	Match.h \
	Utils.h \
	Memory.h \
	Database.h \
	Parser.h \
	Handler.h \
	AimlProcessor.h \
	Responder.h \
	Nodemapper.h \
	Nodemaster.h \
	Substituter.h \
	StringTokenizer.h \
	AimlWriter.h \
	TemplateProcessor.h
Main.o: Main.cpp \
	Kernel.h \
	Element.h \
	Pointer.h
Match.o: Match.cpp \
	Match.h \
	Element.h \
	Pointer.h \
	Nodemapper.h
Memory.o: Memory.cpp \
	Memory.h \
	Database.h \
	Utils.h \
	StringTokenizer.h
Nodemaster.o: Nodemaster.cpp \
	Nodemaster.h \
	Nodemapper.h \
	Element.h \
	Pointer.h
Parser.o: Parser.cpp \
	Parser.h \
	Element.h \
	Pointer.h \
	Utils.h \
	StringTokenizer.h
ServerSocket.o: ServerSocket.cpp \
	ServerSocket.h \
	Socket.h \
	SocketHandler.h \
	Compat.h
Socket.o: Socket.cpp \
	Socket.h \
	SocketHandler.h \
	Compat.h \
	Utils.h
SocketHandler.o: SocketHandler.cpp \
	SocketHandler.h \
	Socket.h
StringTokenizer.o: StringTokenizer.cpp \
	StringTokenizer.h
Substituter.o: Substituter.cpp \
	Substituter.h \
	Utils.h \
	StringTokenizer.h
TemplateProcessor.o: TemplateProcessor.cpp \
	TemplateProcessor.h \
	AimlProcessor.h \
	Element.h \
	Pointer.h \
	Responder.h
TokenProxyListener.o: TokenProxyListener.cpp \
	TokenProxyListener.h \
	Socket.h
Utils.o: Utils.cpp \
	Utils.h
PreParser.o: PreParser.cpp \
	PreParser.h
AimlWriter.o: AimlWriter.cpp \
	AimlWriter.h \
	Element.h
XmlSocketResponder.o: XmlSocketResponder.cpp \
	XmlSocketResponder.h \
	Kernel.h \
	TokenProxyListener.h \
	Logger.h \
	Responder.h \
	AimlProcessor.h \
	ServerSocket.h \
	Socket.h \
	Parser.h
