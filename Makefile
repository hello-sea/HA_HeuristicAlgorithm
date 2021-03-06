#############################################################################
# Makefile for building: EightQueens
# Generated by qmake (3.0) (Qt 5.7.0)
# Project:  EightQueens.pro
# Template: app
# Command: A:\App\Qt\Qt5.7.0\5.7\mingw53_32\bin\qmake.exe -spec win32-g++ -o Makefile EightQueens.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = A:\App\Qt\Qt5.7.0\5.7\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: EightQueens.pro A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/win32-g++/qmake.conf A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/spec_pre.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/qdevice.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/device_config.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/common/angle.conf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/qconfig.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_clucene_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_script.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_script_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt_functions.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt_config.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/qt_config.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/win32-g++/qmake.conf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exclusive_builds.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/default_pre.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/default_pre.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/resolve_config.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/default_post.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/rtti.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/precompile_header.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/warn_on.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/resources.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/moc.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/opengl.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/uic.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/file_copies.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/windows.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/testcase_targets.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exceptions.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/yacc.prf \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/lex.prf \
		EightQueens.pro \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/qtmain.prl \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Widgets.prl \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Gui.prl \
		A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ -o Makefile EightQueens.pro
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/spec_pre.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/qdevice.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/device_config.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/common/angle.conf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/qconfig.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_clucene_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_core.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_help.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_location.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_network.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_script.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_script_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt_functions.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt_config.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/qt_config.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/win32-g++/qmake.conf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/spec_post.prf:
.qmake.stash:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exclusive_builds.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/default_pre.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/default_pre.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/resolve_config.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/default_post.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/rtti.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/precompile_header.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/warn_on.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/qt.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/resources.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/moc.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/opengl.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/uic.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/file_copies.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/win32/windows.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/testcase_targets.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/exceptions.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/yacc.prf:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/mkspecs/features/lex.prf:
EightQueens.pro:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/qtmain.prl:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Widgets.prl:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Gui.prl:
A:/App/Qt/Qt5.7.0/5.7/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ -o Makefile EightQueens.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
