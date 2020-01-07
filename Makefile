# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2018/2
# Prof. Marcelo Luiz Drumond Lanza
# Autora: Karen dos Anjos Arcoverde
#
# $Author: karen.arcoverde $
# $Date: 2018/10/26 08:10:05 $
# $Log: Makefile,v $
# Revision 1.31  2018/10/26 08:10:05  karen.arcoverde
# *** empty log message ***
#
# Revision 1.30  2018/10/25 18:38:40  karen.arcoverde
# *** empty log message ***
#
# Revision 1.29  2018/10/13 19:46:46  karen.arcoverde
# *** empty log message ***
#
# Revision 1.28  2018/10/06 03:48:42  karen.arcoverde
# *** empty log message ***
#
# Revision 1.27  2018/10/06 00:05:34  karen.arcoverde
# *** empty log message ***
#
# Revision 1.26  2018/10/05 20:58:10  karen.arcoverde
# *** empty log message ***
#
# Revision 1.25  2018/10/05 19:36:49  karen.arcoverde
# *** empty log message ***
#
# Revision 1.24  2018/09/29 00:46:08  karen.arcoverde
# *** empty log message ***
#
# Revision 1.23  2018/09/23 02:04:35  karen.arcoverde
# *** empty log message ***
#
# Revision 1.22  2018/09/12 22:38:48  karen.arcoverde
# *** empty log message ***
#
# Revision 1.21  2018/09/12 21:31:00  karen.arcoverde
# *** empty log message ***
#
# Revision 1.20  2018/09/12 03:54:25  karen.arcoverde
# *** empty log message ***
#
# Revision 1.19  2018/09/12 03:05:21  karen.arcoverde
# *** empty log message ***
#
# Revision 1.18  2018/09/05 20:32:41  karen.arcoverde
# *** empty log message ***
#
# Revision 1.17  2018/09/05 20:10:27  karen.arcoverde
# *** empty log message ***
#
# Revision 1.16  2018/09/05 09:04:34  karen.arcoverde
# *** empty log message ***
#
# Revision 1.15  2018/08/28 23:50:42  karen.arcoverde
# *** empty log message ***
#
# Revision 1.14  2018/08/28 23:34:40  karen.arcoverde
# *** empty log message ***
#
# Revision 1.13  2018/08/28 23:17:33  karen.arcoverde
# *** empty log message ***
#
# Revision 1.12  2018/08/28 22:33:04  karen.arcoverde
# *** empty log message ***
#
# Revision 1.11  2018/08/24 09:04:20  karen.arcoverde
# *** empty log message ***
#
# Revision 1.10  2018/08/24 01:52:15  karen.arcoverde
# *** empty log message ***
#
# Revision 1.9  2018/08/24 00:06:01  karen.arcoverde
# *** empty log message ***
#
# Revision 1.8  2018/08/22 09:39:34  karen.arcoverde
# *** empty log message ***
#
# Revision 1.7  2018/08/17 22:53:34  karen.arcoverde
# *** empty log message ***
#
# Revision 1.6  2018/08/17 16:41:59  karen.arcoverde
# *** empty log message ***
#
# Revision 1.5  2018/08/17 15:43:32  karen.arcoverde
# *** empty log message ***
#
# Revision 1.4  2018/08/17 08:30:07  karen.arcoverde
# *** empty log message ***
#
# Revision 1.3  2018/08/17 03:31:43  karen.arcoverde
# *** empty log message ***
#
# Revision 1.2  2018/08/17 01:33:54  karen.arcoverde
# *** empty log message ***
#
# Revision 1.1  2018/08/16 20:01:56  karen.arcoverde
# Initial revision
#

CC = gcc 
LD = gcc
AR = ar

CFLAGS = -Wall -std=c99
LFLAGS = -Wall 

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o
AULA0106OBJS = aula0106.o
AULA0107OBJS = aula0107.o



AULA0202AOBJS = aula0201a.o aula0202.o 
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o



AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o




AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o





AULA0502AOBJS = aula0501a.o aula0502.o
AULA0502BOBJS = aula0501b.o aula0502.o
AULA0502COBJS = aula0501c.o aula0502.o
AULA0502DOBJS = aula0501d.o aula0502.o
AULA0502EOBJS = aula0501e.o aula0502.o




AULA0602OBJS = aula0601.o aula0602.o


AULA0702OBJS = aula0701.o aula0702.o


AULA0802AOBJS = aula0801.o aula0802a.o
AULA0802BOBJS = aula0801.o aula0802b.o
AULA0803AOBJS = aula0801.o aula0803a.o
AULA0803BOBJS = aula0801.o aula0803b.o
AULA0805AOBJS = aula0804.o aula0805a.o
AULA0805BOBJS = aula0804.o aula0805b.o
AULA0806AOBJS = aula0804.o aula0806a.o
AULA0806BOBJS = aula0804.o aula0806b.o


AULA0902OBJS = aula0901.o aula0902.o
AULA0903OBJS = aula0901.o aula0903.o


AULA1001OBJS = aula1001.o
AULA1002OBJS = aula1002.o



LIBMATEMATICAOBJS = aula0401a.o 
LIBMATEMATICA = libmatematica.a


 

AULA01 = aula0101\
	 aula0102\
	 aula0103\
	 aula0104\
	 aula0105\
	 aula0106\
	 aula0107


AULA02 = aula0202a\
	 aula0202b\
	 aula0202c\
	 aula0202d	 


AULA03 = aula0302a\
         aula0302b\
         aula0302c\
	 aula0302d


AULA04 = aula0402a\
	 aula0402b\
	 aula0402c\
	 aula0402d


AULA05 = aula0502a\
	 aula0502b\
	 aula0502c\
	 aula0502d\
	 aula0502e




AULA06 = aula0602
 


AULA07 = aula0702



AULA08 = aula0802a\
	 aula0802b\
	 aula0803a\
	 aula0803b\
	 aula0805a\
	 aula0805b\
	 aula0806a\
	 aula0806b



AULA09 = aula0902\
	 aula0903



AULA10 = aula1001\
	 aula1002



LIBS = $(LIBMATEMATICA)
		 

EXECS = $(AULA01)\
        $(AULA02)\
        $(AULA03)\
        $(AULA04)\
	$(AULA05)\
	$(AULA06)\
	$(AULA07)\
	$(AULA08)\
	$(AULA09)\
	$(AULA10)


ALL = $(EXECS) $(LIBS)




# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)


libmatematica.a: $(LIBMATEMATICAOBJS)
	$(AR) -r $@ $(LIBMATEMATICAOBJS)



aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)
aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)
aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)
aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)
aula0106: $(AULA0106OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0106OBJS)
aula0107: $(AULA0107OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0107OBJS)





aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)
aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)
aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)
aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)




aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)
aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)
aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)
aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)




aula0402a: $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)
aula0402b: $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)
aula0402c: $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)
aula0402d: $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)




aula0502a: $(LIBMATEMATICA) $(AULA0502AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) -L. -lmatematica
aula0502b: $(LIBMATEMATICA) $(AULA0502BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) -L. -lmatematica
aula0502c: $(LIBMATEMATICA) $(AULA0502COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) -L. -lmatematica
aula0502d: $(LIBMATEMATICA) $(AULA0502DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) -L. -lmatematica
aula0502e: $(LIBMATEMATICA) $(AULA0502EOBJS)
	$(LD) $(LFLAGS) -lm -o $@ $(AULA0502EOBJS)



aula0602: $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS) 




aula0702: $(AULA0702OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0702OBJS)



aula0802a: $(AULA0802AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802AOBJS)
aula0802b: $(AULA0802BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802BOBJS)
aula0803a: $(AULA0803AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803AOBJS)
aula0803b: $(AULA0803BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803BOBJS)
aula0805a: $(AULA0805AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805AOBJS)
aula0805b: $(AULA0805BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805BOBJS)
aula0806a: $(AULA0806AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0806AOBJS)
aula0806b: $(AULA0806BOBJS) 
	$(LD) $(LFLAGS) -o $@ $(AULA0806BOBJS)




aula0902: $(AULA0902OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0902OBJS)
aula0903: $(AULA0903OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0903OBJS)




aula1001: $(AULA1001OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA1001OBJS)
aula1002: $(AULA1002OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA1002OBJS)




clean: 
	rm -f *.o $(ALL)


# $RCSfile: Makefile,v $ 

