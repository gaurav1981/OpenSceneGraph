// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ArgumentParser>
#include <osg/Drawable>
#include <osg/Image>
#include <osg/Node>
#include <osg/Object>
#include <osg/Shape>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Uniform>
#include <osgDB/Archive>
#include <osgDB/DatabasePager>
#include <osgDB/DotOsgWrapper>
#include <osgDB/DynamicLibrary>
#include <osgDB/Input>
#include <osgDB/Output>
#include <osgDB/ReaderWriter>
#include <osgDB/Registry>
#include <osgDB/SharedStateManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgDB::basic_type_wrapper)
	I_Constructor0(____basic_type_wrapper,
	               "",
	               "");
	I_Method1(bool, matches, IN, const osg::Object *, proto,
	          __bool__matches__C5_osg_Object_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgDB::RegisterDotOsgWrapperProxy)
	I_ConstructorWithDefaults6(IN, osg::Object *, proto, , IN, const std::string &, name, , IN, const std::string &, associates, , IN, osgDB::DotOsgWrapper::ReadFunc, readFunc, , IN, osgDB::DotOsgWrapper::WriteFunc, writeFunc, , IN, osgDB::DotOsgWrapper::ReadWriteMode, readWriteMode, osgDB::DotOsgWrapper::READ_AND_WRITE,
	                           ____RegisterDotOsgWrapperProxy__osg_Object_P1__C5_std_string_R1__C5_std_string_R1__DotOsgWrapper_ReadFunc__DotOsgWrapper_WriteFunc__DotOsgWrapper_ReadWriteMode,
	                           "",
	                           "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::Registry)
	I_BaseType(osg::Referenced);
	I_Method1(void, readCommandLine, IN, osg::ArgumentParser &, commandLine,
	          __void__readCommandLine__osg_ArgumentParser_R1,
	          "read the command line arguments. ",
	          "");
	I_Method2(void, addFileExtensionAlias, IN, const std::string, mapExt, IN, const std::string, toExt,
	          __void__addFileExtensionAlias__C5_std_string__C5_std_string,
	          "register an .fileextension alias to mapExt toExt, the later should the the extension name of the readerwriter plugin library. ",
	          "For example to map .tif files to the tiff loader, use addExtAlias(\"tif\",\"tiff\") which will enable .tif to be read by the libdb_tiff readerwriter plugin. ");
	I_Method1(bool, readPluginAliasConfigurationFile, IN, const std::string &, file,
	          __bool__readPluginAliasConfigurationFile__C5_std_string_R1,
	          "Reads a file that configures extension mappings. ",
	          "File is ASCII text and each line contains the parameyters to the addFileExtensionAlias method. Lines can be commented out with an initial '#' character. ");
	I_Method1(void, addDotOsgWrapper, IN, osgDB::DotOsgWrapper *, wrapper,
	          __void__addDotOsgWrapper__DotOsgWrapper_P1,
	          "",
	          "");
	I_Method1(void, removeDotOsgWrapper, IN, osgDB::DotOsgWrapper *, wrapper,
	          __void__removeDotOsgWrapper__DotOsgWrapper_P1,
	          "",
	          "");
	I_Method1(void, addReaderWriter, IN, osgDB::ReaderWriter *, rw,
	          __void__addReaderWriter__ReaderWriter_P1,
	          "",
	          "");
	I_Method1(void, removeReaderWriter, IN, osgDB::ReaderWriter *, rw,
	          __void__removeReaderWriter__ReaderWriter_P1,
	          "",
	          "");
	I_Method1(std::string, createLibraryNameForFile, IN, const std::string &, fileName,
	          __std_string__createLibraryNameForFile__C5_std_string_R1,
	          "create the platform specific library name associated with file. ",
	          "");
	I_Method1(std::string, createLibraryNameForExtension, IN, const std::string &, ext,
	          __std_string__createLibraryNameForExtension__C5_std_string_R1,
	          "create the platform specific library name associated with file extension. ",
	          "");
	I_Method1(std::string, createLibraryNameForNodeKit, IN, const std::string &, name,
	          __std_string__createLibraryNameForNodeKit__C5_std_string_R1,
	          "create the platform specific library name associated with nodekit library name. ",
	          "");
	I_Method1(bool, loadLibrary, IN, const std::string &, fileName,
	          __bool__loadLibrary__C5_std_string_R1,
	          "find the library in the OSG_LIBRARY_PATH and load it. ",
	          "");
	I_Method1(bool, closeLibrary, IN, const std::string &, fileName,
	          __bool__closeLibrary__C5_std_string_R1,
	          "close the attached library with specified name. ",
	          "");
	I_Method0(void, closeAllLibraries,
	          __void__closeAllLibraries,
	          "close all libraries. ",
	          "");
	I_Method1(osgDB::ReaderWriter *, getReaderWriterForExtension, IN, const std::string &, ext,
	          __ReaderWriter_P1__getReaderWriterForExtension__C5_std_string_R1,
	          "get a reader writer which handles specified extension. ",
	          "");
	I_Method2(osg::Object *, readObjectOfType, IN, const osg::Object &, compObj, IN, osgDB::Input &, fr,
	          __osg_Object_P1__readObjectOfType__C5_osg_Object_R1__Input_R1,
	          "",
	          "");
	I_Method2(osg::Object *, readObjectOfType, IN, const osgDB::basic_type_wrapper &, btw, IN, osgDB::Input &, fr,
	          __osg_Object_P1__readObjectOfType__C5_basic_type_wrapper_R1__Input_R1,
	          "",
	          "");
	I_Method1(osg::Object *, readObject, IN, osgDB::Input &, fr,
	          __osg_Object_P1__readObject__Input_R1,
	          "",
	          "");
	I_Method1(osg::Image *, readImage, IN, osgDB::Input &, fr,
	          __osg_Image_P1__readImage__Input_R1,
	          "",
	          "");
	I_Method1(osg::Drawable *, readDrawable, IN, osgDB::Input &, fr,
	          __osg_Drawable_P1__readDrawable__Input_R1,
	          "",
	          "");
	I_Method1(osg::Uniform *, readUniform, IN, osgDB::Input &, fr,
	          __osg_Uniform_P1__readUniform__Input_R1,
	          "",
	          "");
	I_Method1(osg::StateAttribute *, readStateAttribute, IN, osgDB::Input &, fr,
	          __osg_StateAttribute_P1__readStateAttribute__Input_R1,
	          "",
	          "");
	I_Method1(osg::Node *, readNode, IN, osgDB::Input &, fr,
	          __osg_Node_P1__readNode__Input_R1,
	          "",
	          "");
	I_Method2(bool, writeObject, IN, const osg::Object &, obj, IN, osgDB::Output &, fw,
	          __bool__writeObject__C5_osg_Object_R1__Output_R1,
	          "",
	          "");
	I_Method1(void, setReadFileCallback, IN, osgDB::Registry::ReadFileCallback *, cb,
	          __void__setReadFileCallback__ReadFileCallback_P1,
	          "Set the Registry callback to use in place of the default readFile calls. ",
	          "");
	I_Method0(osgDB::Registry::ReadFileCallback *, getReadFileCallback,
	          __ReadFileCallback_P1__getReadFileCallback,
	          "Get the readFile callback. ",
	          "");
	I_Method0(const osgDB::Registry::ReadFileCallback *, getReadFileCallback,
	          __C5_ReadFileCallback_P1__getReadFileCallback,
	          "Get the const readFile callback. ",
	          "");
	I_Method4(osgDB::ReaderWriter::ReadResult, openArchive, IN, const std::string &, fileName, IN, osgDB::ReaderWriter::ArchiveStatus, status, IN, unsigned int, indexBlockSizeHint, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__openArchive__C5_std_string_R1__ReaderWriter_ArchiveStatus__unsigned_int__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method4(osgDB::ReaderWriter::ReadResult, openArchiveImplementation, IN, const std::string &, fileName, IN, osgDB::ReaderWriter::ArchiveStatus, status, IN, unsigned int, indexBlockSizeHint, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__openArchiveImplementation__C5_std_string_R1__ReaderWriter_ArchiveStatus__unsigned_int__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readObject__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readObjectImplementation, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readObjectImplementation__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readImage__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readImageImplementation, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readImageImplementation__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readHeightField__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readHeightFieldImplementation, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readHeightFieldImplementation__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readNode__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readNodeImplementation, IN, const std::string &, fileName, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readNodeImplementation__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method1(void, setWriteFileCallback, IN, osgDB::Registry::WriteFileCallback *, cb,
	          __void__setWriteFileCallback__WriteFileCallback_P1,
	          "Set the Registry callback to use in place of the default writeFile calls. ",
	          "");
	I_Method0(osgDB::Registry::WriteFileCallback *, getWriteFileCallback,
	          __WriteFileCallback_P1__getWriteFileCallback,
	          "Get the writeFile callback. ",
	          "");
	I_Method0(const osgDB::Registry::WriteFileCallback *, getWriteFileCallback,
	          __C5_WriteFileCallback_P1__getWriteFileCallback,
	          "Get the const writeFile callback. ",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeObject__C5_osg_Object_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeObjectImplementation, IN, const osg::Object &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeObjectImplementation__C5_osg_Object_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeImage__C5_osg_Image_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeImageImplementation, IN, const osg::Image &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeImageImplementation__C5_osg_Image_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeHeightField__C5_osg_HeightField_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeHeightFieldImplementation, IN, const osg::HeightField &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeHeightFieldImplementation__C5_osg_HeightField_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, node, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeNodeImplementation, IN, const osg::Node &, node, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeNodeImplementation__C5_osg_Node_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setCreateNodeFromImage, IN, bool, flag,
	          __void__setCreateNodeFromImage__bool,
	          "",
	          "");
	I_Method0(bool, getCreateNodeFromImage,
	          __bool__getCreateNodeFromImage,
	          "",
	          "");
	I_Method1(void, setOptions, IN, osgDB::ReaderWriter::Options *, opt,
	          __void__setOptions__ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method0(osgDB::ReaderWriter::Options *, getOptions,
	          __ReaderWriter_Options_P1__getOptions,
	          "",
	          "");
	I_Method0(const osgDB::ReaderWriter::Options *, getOptions,
	          __C5_ReaderWriter_Options_P1__getOptions,
	          "",
	          "");
	I_Method0(void, initFilePathLists,
	          __void__initFilePathLists,
	          "initilize both the Data and Library FilePaths, by default called by the constructor, so it should only be required if you want to force the re-reading of environmental variables. ",
	          "");
	I_Method0(void, initDataFilePathList,
	          __void__initDataFilePathList,
	          "initilize the Data FilePath by reading the OSG_FILE_PATH environmental variable. ",
	          "");
	I_Method1(void, setDataFilePathList, IN, const osgDB::FilePathList &, filepath,
	          __void__setDataFilePathList__C5_FilePathList_R1,
	          "Set the data file path using a list of paths stored in a FilePath, which is used when search for data files. ",
	          "");
	I_Method1(void, setDataFilePathList, IN, const std::string &, paths,
	          __void__setDataFilePathList__C5_std_string_R1,
	          "Set the data file path using a single string deliminated either with ';' (Windows) or ':' (All other platforms), which is used when search for data files. ",
	          "");
	I_Method0(osgDB::FilePathList &, getDataFilePathList,
	          __FilePathList_R1__getDataFilePathList,
	          "get the data file path which is used when search for data files. ",
	          "");
	I_Method0(const osgDB::FilePathList &, getDataFilePathList,
	          __C5_FilePathList_R1__getDataFilePathList,
	          "get the const data file path which is used when search for data files. ",
	          "");
	I_Method0(void, initLibraryFilePathList,
	          __void__initLibraryFilePathList,
	          "initilize the Library FilePath by reading the OSG_LIBRARY_PATH and the appropriate system environmental variables ",
	          "");
	I_Method1(void, setLibraryFilePathList, IN, const osgDB::FilePathList &, filepath,
	          __void__setLibraryFilePathList__C5_FilePathList_R1,
	          "Set the library file path using a list of paths stored in a FilePath, which is used when search for data files. ",
	          "");
	I_Method1(void, setLibraryFilePathList, IN, const std::string &, paths,
	          __void__setLibraryFilePathList__C5_std_string_R1,
	          "Set the library file path using a single string deliminated either with ';' (Windows) or ':' (All other platforms), which is used when search for data files. ",
	          "");
	I_Method0(osgDB::FilePathList &, getLibraryFilePathList,
	          __FilePathList_R1__getLibraryFilePathList,
	          "get the library file path which is used when search for library (dso/dll's) files. ",
	          "");
	I_Method0(const osgDB::FilePathList &, getLibraryFilePathList,
	          __C5_FilePathList_R1__getLibraryFilePathList,
	          "get the const library file path which is used when search for library (dso/dll's) files. ",
	          "");
	I_Method1(void, updateTimeStampOfObjectsInCacheWithExtenalReferences, IN, double, currentTime,
	          __void__updateTimeStampOfObjectsInCacheWithExtenalReferences__double,
	          "For each object in the cache which has an reference count greater than 1 (and therefore referenced by elsewhere in the application) set the time stamp for that object in the cache to specified time. ",
	          "This would typically be called once per frame by applications which are doing database paging, and need to prune objects that are no longer required. Time value is time in sceonds. ");
	I_Method1(void, removeExpiredObjectsInCache, IN, double, expiryTime,
	          __void__removeExpiredObjectsInCache__double,
	          "Removed object in the cache which have a time stamp at or before the specified expiry time. ",
	          "This would typically be called once per frame by applications which are doing database paging, and need to prune objects that are no longer required, and called after the a called after the call to updateTimeStampOfObjectsInCacheWithExtenalReferences(currentTime). Note, the currentTime is not the expiryTime, one would typically set the expiry time to a fixed amount of time before currentTime, such as expiryTime = currentTime-10.0. Time value is time in sceonds. ");
	I_Method0(void, clearObjectCache,
	          __void__clearObjectCache,
	          "Remove all objects in the cache regardless of having external references or expiry times. ",
	          "");
	I_MethodWithDefaults3(void, addEntryToObjectCache, IN, const std::string &, filename, , IN, osg::Object *, object, , IN, double, timestamp, 0.0,
	                      __void__addEntryToObjectCache__C5_std_string_R1__osg_Object_P1__double,
	                      "Add a filename,object,timestamp tripple to the Registry::ObjectCache. ",
	                      "");
	I_Method1(osg::Object *, getFromObjectCache, IN, const std::string &, fileName,
	          __osg_Object_P1__getFromObjectCache__C5_std_string_R1,
	          "Get an object from the object cache. ",
	          "");
	I_Method2(void, addToArchiveCache, IN, const std::string &, fileName, IN, osgDB::Archive *, archive,
	          __void__addToArchiveCache__C5_std_string_R1__osgDB_Archive_P1,
	          "Add archive to archive cache so that future calls reference this archive. ",
	          "");
	I_Method1(void, removeFromArchiveCache, IN, const std::string &, fileName,
	          __void__removeFromArchiveCache__C5_std_string_R1,
	          "Remove archive from cache. ",
	          "");
	I_Method1(osgDB::Archive *, getFromArchiveCache, IN, const std::string &, fileName,
	          __osgDB_Archive_P1__getFromArchiveCache__C5_std_string_R1,
	          "Get an archive from the archive cache. ",
	          "");
	I_Method0(void, clearArchiveCache,
	          __void__clearArchiveCache,
	          "Remove all archives from the archive cache. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, state, 0,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "If State is non-zero, this function releases OpenGL objects for the specified graphics context. ",
	                      "Otherwise, releases OpenGL objexts for all graphics contexts. ");
	I_Method1(osgDB::DynamicLibrary *, getLibrary, IN, const std::string &, fileName,
	          __DynamicLibrary_P1__getLibrary__C5_std_string_R1,
	          "get the attached library with specified name. ",
	          "");
	I_Method1(void, setDatabasePager, IN, osgDB::DatabasePager *, databasePager,
	          __void__setDatabasePager__DatabasePager_P1,
	          "Set the DatabasePager. ",
	          "");
	I_Method0(osgDB::DatabasePager *, getOrCreateDatabasePager,
	          __DatabasePager_P1__getOrCreateDatabasePager,
	          "Get the DatabasePager, creating one if one is not already created. ",
	          "");
	I_Method0(osgDB::DatabasePager *, getDatabasePager,
	          __DatabasePager_P1__getDatabasePager,
	          "Get the DatabasePager. ",
	          "Return 0 if no DatabasePager has been assigned. ");
	I_Method1(void, setSharedStateManager, IN, osgDB::SharedStateManager *, SharedStateManager,
	          __void__setSharedStateManager__SharedStateManager_P1,
	          "Set the SharedStateManager. ",
	          "");
	I_Method0(osgDB::SharedStateManager *, getOrCreateSharedStateManager,
	          __SharedStateManager_P1__getOrCreateSharedStateManager,
	          "Get the SharedStateManager, creating one if one is not already created. ",
	          "");
	I_Method0(osgDB::SharedStateManager *, getSharedStateManager,
	          __SharedStateManager_P1__getSharedStateManager,
	          "Get the SharedStateManager. ",
	          "Return 0 if no SharedStateManager has been assigned. ");
	I_StaticMethodWithDefaults1(osgDB::Registry *, instance, IN, bool, erase, false,
	                            __Registry_P1__instance__bool_S,
	                            "",
	                            "");
	I_SimpleProperty(bool, CreateNodeFromImage, 
	                 __bool__getCreateNodeFromImage, 
	                 __void__setCreateNodeFromImage__bool);
	I_SimpleProperty(const osgDB::FilePathList &, DataFilePathList, 
	                 __C5_FilePathList_R1__getDataFilePathList, 
	                 __void__setDataFilePathList__C5_FilePathList_R1);
	I_SimpleProperty(osgDB::DatabasePager *, DatabasePager, 
	                 __DatabasePager_P1__getDatabasePager, 
	                 __void__setDatabasePager__DatabasePager_P1);
	I_SimpleProperty(const osgDB::FilePathList &, LibraryFilePathList, 
	                 __C5_FilePathList_R1__getLibraryFilePathList, 
	                 __void__setLibraryFilePathList__C5_FilePathList_R1);
	I_SimpleProperty(osgDB::ReaderWriter::Options *, Options, 
	                 __ReaderWriter_Options_P1__getOptions, 
	                 __void__setOptions__ReaderWriter_Options_P1);
	I_SimpleProperty(osgDB::Registry::ReadFileCallback *, ReadFileCallback, 
	                 __ReadFileCallback_P1__getReadFileCallback, 
	                 __void__setReadFileCallback__ReadFileCallback_P1);
	I_SimpleProperty(osgDB::SharedStateManager *, SharedStateManager, 
	                 __SharedStateManager_P1__getSharedStateManager, 
	                 __void__setSharedStateManager__SharedStateManager_P1);
	I_SimpleProperty(osgDB::Registry::WriteFileCallback *, WriteFileCallback, 
	                 __WriteFileCallback_P1__getWriteFileCallback, 
	                 __void__setWriteFileCallback__WriteFileCallback_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::Registry::ReadFileCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____ReadFileCallback,
	               "",
	               "");
	I_Method4(osgDB::ReaderWriter::ReadResult, openArchive, IN, const std::string &, filename, IN, osgDB::ReaderWriter::ArchiveStatus, status, IN, unsigned int, indexBlockSizeHint, IN, const osgDB::ReaderWriter::Options *, useObjectCache,
	          __ReaderWriter_ReadResult__openArchive__C5_std_string_R1__ReaderWriter_ArchiveStatus__unsigned_int__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, filename, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readObject__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, filename, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readImage__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, filename, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readHeightField__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, filename, IN, const osgDB::ReaderWriter::Options *, options,
	          __ReaderWriter_ReadResult__readNode__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgDB::Registry::ReadFunctor)
	I_Constructor2(IN, const std::string &, filename, IN, const osgDB::ReaderWriter::Options *, options,
	               ____ReadFunctor__C5_std_string_R1__C5_ReaderWriter_Options_P1,
	               "",
	               "");
	I_Method1(osgDB::ReaderWriter::ReadResult, doRead, IN, osgDB::ReaderWriter &, rw,
	          __ReaderWriter_ReadResult__doRead__ReaderWriter_R1,
	          "",
	          "");
	I_Method1(bool, isValid, IN, osgDB::ReaderWriter::ReadResult &, readResult,
	          __bool__isValid__ReaderWriter_ReadResult_R1,
	          "",
	          "");
	I_Method1(bool, isValid, IN, osg::Object *, object,
	          __bool__isValid__osg_Object_P1,
	          "",
	          "");
	I_PublicMemberProperty(std::string, _filename);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::Registry::WriteFileCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____WriteFileCallback,
	               "",
	               "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeObject__C5_osg_Object_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeImage__C5_osg_Image_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeHeightField__C5_osg_HeightField_R1__C5_std_string_R1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, obj, IN, const std::string &, fileName,
	          __ReaderWriter_WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1,
	          "",
	          "");
END_REFLECTOR

