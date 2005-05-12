// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/Shape>
#include <osg/ShapeDrawable>
#include <osg/State>
#include <osg/Vec4>

BEGIN_OBJECT_REFLECTOR(osg::ShapeDrawable)
	BaseType(osg::Drawable);
	Constructor0();
	ConstructorWithDefaults2(IN, osg::Shape *, shape, , IN, osg::TessellationHints *, hints, 0);
	ConstructorWithDefaults2(IN, const osg::ShapeDrawable &, pg, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method1(void, setColor, IN, const osg::Vec4 &, color);
	Method0(const osg::Vec4 &, getColor);
	Method1(void, setTessellationHints, IN, osg::TessellationHints *, hints);
	Method0(osg::TessellationHints *, getTessellationHints);
	Method0(const osg::TessellationHints *, getTessellationHints);
	Method1(void, drawImplementation, IN, osg::State &, state);
	Method1(bool, supports, IN, osg::Drawable::AttributeFunctor &, x);
	Method1(bool, supports, IN, osg::Drawable::ConstAttributeFunctor &, x);
	Method1(void, accept, IN, osg::Drawable::ConstAttributeFunctor &, af);
	Method1(bool, supports, IN, osg::PrimitiveFunctor &, x);
	Method1(void, accept, IN, osg::PrimitiveFunctor &, pf);
	Method0(osg::BoundingBox, computeBound);
	Property(const osg::Vec4 &, Color);
	Property(osg::TessellationHints *, TessellationHints);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::TessellationHints::TessellationMode)
	EnumLabel(osg::TessellationHints::USE_SHAPE_DEFAULTS);
	EnumLabel(osg::TessellationHints::USE_TARGET_NUM_FACES);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::TessellationHints)
	BaseType(osg::Object);
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::TessellationHints &, tess, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method1(void, setTessellationMode, IN, osg::TessellationHints::TessellationMode, mode);
	Method0(osg::TessellationHints::TessellationMode, getTessellationMode);
	Method1(void, setDetailRatio, IN, float, ratio);
	Method0(float, getDetailRatio);
	Method1(void, setTargetNumFaces, IN, unsigned int, target);
	Method0(unsigned int, getTargetNumFaces);
	Method1(void, setCreateFrontFace, IN, bool, on);
	Method0(bool, getCreateFrontFace);
	Method1(void, setCreateBackFace, IN, bool, on);
	Method0(bool, getCreateBackFace);
	Method1(void, setCreateNormals, IN, bool, on);
	Method0(bool, getCreateNormals);
	Method1(void, setCreateTextureCoords, IN, bool, on);
	Method0(bool, getCreateTextureCoords);
	Method1(void, setCreateTop, IN, bool, on);
	Method0(bool, getCreateTop);
	Method1(void, setCreateBody, IN, bool, on);
	Method0(bool, getCreateBody);
	Method1(void, setCreateBottom, IN, bool, on);
	Method0(bool, getCreateBottom);
	Property(bool, CreateBackFace);
	Property(bool, CreateBody);
	Property(bool, CreateBottom);
	Property(bool, CreateFrontFace);
	Property(bool, CreateNormals);
	Property(bool, CreateTextureCoords);
	Property(bool, CreateTop);
	Property(float, DetailRatio);
	Property(unsigned int, TargetNumFaces);
	Property(osg::TessellationHints::TessellationMode, TessellationMode);
END_REFLECTOR

