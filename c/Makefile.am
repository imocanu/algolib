SUBDIRS = src

EXTRA_DIST =	\
	autogen.sh	\
	cleanall.sh \
	$(NULL)

DISTCHECK_CONFIGURE_FLAGS = \
	--enable-xml-docs \
	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}