SUBDIRS = libopm
bin_PROGRAMS = hopm

AM_CPPFLAGS = -DHOPM_PREFIX="\"$(prefix)\"" -DHOPM_ETCDIR="\"$(sysconfdir)\"" -DHOPM_LOGDIR="\"$(localstatedir)/log\""
AM_YFLAGS = -d

hopm_SOURCES = compat.c        \
               compat.h        \
               config-parser.y \
               config-lexer.l  \
               config.c        \
               config.h        \
               dnsbl.c         \
               dnsbl.h         \
               extern.h        \
               firedns.c       \
               firedns.h       \
               irc.c           \
               irc.h           \
               list.c          \
               list.h          \
               log.c           \
               log.h           \
               main.c          \
               main.h          \
               memory.c        \
               memory.h        \
               match.c         \
               match.h         \
               misc.c          \
               misc.h          \
               negcache.c      \
               negcache.h      \
               opercmd.c       \
               opercmd.h       \
               options.h       \
               patchlevel.h    \
               scan.c          \
               scan.h          \
               serno.h         \
               stats.c         \
               stats.h

hopm_LDADD = libopm/src/.libs/libopm.a @LIBOBJS@
