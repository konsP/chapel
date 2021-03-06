## Process this file with automake to produce Makefile.in	-*- makefile -*-
#   $Source: bitbucket.org:berkeleylab/gasnet.git/aries-conduit/Makefile.am $
# Description: Makefile for GASNet aries conduit
# Copyright 2013, The Regents of the University of California
# Terms of use are as specified in license.txt

AUTOMAKE_OPTIONS = foreign 1.4

CONDUIT_NAME=aries

##
## gemini-conduit holds the actual sources
##
gemini_srcdir = $(top_srcdir)/gemini-conduit
gemini_install_hdrs = $(gemini_srcdir)/*.h

## generalized PMI support
pmi_srcdir = $(top_srcdir)/other/pmi-spawner

# any conduit-specific subdirectories containing Makefile.am's
SUBDIRS = contrib

# complete list of files in the conduit directory
# include all headers, documentation, etc. 
# and any subdirectories not containing Makefile.am's
CONDUIT_FILELIST =            \
      gasnet_empty_internal.h \
      README                  \
      license.txt

# list of conduit core and extended .c source files 
# to be compiled into libgasnet on the compiler command line
CONDUIT_SOURCELIST =          \
      $(gemini_srcdir)/gasnet_core.c \
      $(gemini_srcdir)/gasnet_gemini.c \
      $(gemini_srcdir)/gasnet_extended.c \
      $(pmi_srcdir)/gasnet_bootstrap_pmi.c

# additional -I or -D directives needed by this specific conduit
# other than the standard GASNet includes and flags
CONDUIT_EXTRALIBCFLAGS = @GNI_INCLUDES@ -I$(gemini_srcdir) -DGASNET_CONDUIT_ARIES -D_GNU_SOURCE

# additional conduit header files to install from external, non-standard directories
CONDUIT_EXTRAHEADERS = $(gemini_install_hdrs)

# headers selected by default rules that should NOT be installed
CONDUIT_PRIVATEHEADERS = gasnet_gemini.h

# additional file dependencies not mentioned elsewhere 
# that should force libgasnet rebuild on update
CONDUIT_EXTRADEPS = $(gemini_srcdir)/*.[ch] $(pmi_srcdir)/*.h

# additional object files to be included in libgasnet that need to be compiled 
# using a special, conduit-specific command. These should also be included as
# forced targets in this file, and should probably use LIBINCLUDES/LIBDEFINES
CONDUIT_SPECIAL_OBJS = 

# the default job spawn command to be used for "make run-tests"
# The following substitutions are performed:
#   %P = program executable name
#   %N = requested node count
#   %A = program arguments
#   %Q = program arguments w/ an extra level of quotes
#   %D = the current working directory
#   %H = hostfile (if any)
#CONDUIT_RUNCMD = aprun -N 1 -n %N %P %A
CONDUIT_RUNCMD = @TOP_BUILDDIR@/aries-conduit/contrib/gasnetrun_aries -np %N -c 0 %P %A

# conduit-specific tests in ../tests directory
CONDUIT_TESTS =

# conduit-specific hook to install gemini-conduit's README as our own
# The normal uninstall is sufficient to remove it.
conduit_has_install_data_hook = yes
do-install-data-conduit:
	@rm -f $(DESTDIR)$(docdir)/README-aries
	$(INSTALL_DATA) $(srcdir)/../gemini-conduit/README $(DESTDIR)$(docdir)/README-aries

# -------- Do not modify anything below this line --------

if BUILD_SEQ_LIBS
libgasnet_aries_seq_a_SOURCES =
libraries_seq = libgasnet-aries-seq.a
endif
if BUILD_PAR_LIBS
libgasnet_aries_par_a_SOURCES =
libraries_par = libgasnet-aries-par.a
endif
if BUILD_PARSYNC_LIBS
libgasnet_aries_parsync_a_SOURCES =
libraries_parsync = libgasnet-aries-parsync.a
endif
libraries = $(libraries_seq) $(libraries_par) $(libraries_parsync)

include $(top_builddir)/other/Makefile-conduit.mak

libgasnet-aries-seq.a: $(libgasnet_dependencies)
	@$(MAKE) do-libgasnet-seq

libgasnet-aries-par.a: $(libgasnet_dependencies)
	@$(MAKE) do-libgasnet-par

libgasnet-aries-parsync.a: $(libgasnet_dependencies)
	@$(MAKE) do-libgasnet-parsync

if USE_ARIES_CONDUIT  
lib_LIBRARIES = $(libraries) 
all-local: $(lib_LIBRARIES) $(makefile_fragments)
clean-local: do-clean-local
install-data-local: do-install-data-local
uninstall-local: do-uninstall-local
else
$(top_srcdir)/gasnet.h: do-error
endif


