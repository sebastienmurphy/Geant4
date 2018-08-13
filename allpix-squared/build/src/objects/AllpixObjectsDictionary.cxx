// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME AllpixObjectsDictionary

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/Object.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/SensorCharge.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/PropagatedCharge.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/DepositedCharge.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/PixelCharge.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/Pixel.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/PixelHit.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/MCParticle.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects/MCTrack.hpp"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_allpixcLcLObject(void *p = 0);
   static void *newArray_allpixcLcLObject(Long_t size, void *p);
   static void delete_allpixcLcLObject(void *p);
   static void deleteArray_allpixcLcLObject(void *p);
   static void destruct_allpixcLcLObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::Object*)
   {
      ::allpix::Object *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::Object >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::Object", ::allpix::Object::Class_Version(), "", 34,
                  typeid(::allpix::Object), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::Object::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::Object) );
      instance.SetNew(&new_allpixcLcLObject);
      instance.SetNewArray(&newArray_allpixcLcLObject);
      instance.SetDelete(&delete_allpixcLcLObject);
      instance.SetDeleteArray(&deleteArray_allpixcLcLObject);
      instance.SetDestructor(&destruct_allpixcLcLObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::Object*)
   {
      return GenerateInitInstanceLocal((::allpix::Object*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::Object*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLSensorCharge(void *p = 0);
   static void *newArray_allpixcLcLSensorCharge(Long_t size, void *p);
   static void delete_allpixcLcLSensorCharge(void *p);
   static void deleteArray_allpixcLcLSensorCharge(void *p);
   static void destruct_allpixcLcLSensorCharge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::SensorCharge*)
   {
      ::allpix::SensorCharge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::SensorCharge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::SensorCharge", ::allpix::SensorCharge::Class_Version(), "", 129,
                  typeid(::allpix::SensorCharge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::SensorCharge::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::SensorCharge) );
      instance.SetNew(&new_allpixcLcLSensorCharge);
      instance.SetNewArray(&newArray_allpixcLcLSensorCharge);
      instance.SetDelete(&delete_allpixcLcLSensorCharge);
      instance.SetDeleteArray(&deleteArray_allpixcLcLSensorCharge);
      instance.SetDestructor(&destruct_allpixcLcLSensorCharge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::SensorCharge*)
   {
      return GenerateInitInstanceLocal((::allpix::SensorCharge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::SensorCharge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLMCTrack(void *p = 0);
   static void *newArray_allpixcLcLMCTrack(Long_t size, void *p);
   static void delete_allpixcLcLMCTrack(void *p);
   static void deleteArray_allpixcLcLMCTrack(void *p);
   static void destruct_allpixcLcLMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::MCTrack*)
   {
      ::allpix::MCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::MCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::MCTrack", ::allpix::MCTrack::Class_Version(), "MCTrack.hpp", 22,
                  typeid(::allpix::MCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::MCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::MCTrack) );
      instance.SetNew(&new_allpixcLcLMCTrack);
      instance.SetNewArray(&newArray_allpixcLcLMCTrack);
      instance.SetDelete(&delete_allpixcLcLMCTrack);
      instance.SetDeleteArray(&deleteArray_allpixcLcLMCTrack);
      instance.SetDestructor(&destruct_allpixcLcLMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::MCTrack*)
   {
      return GenerateInitInstanceLocal((::allpix::MCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::MCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLMCParticle(void *p = 0);
   static void *newArray_allpixcLcLMCParticle(Long_t size, void *p);
   static void delete_allpixcLcLMCParticle(void *p);
   static void deleteArray_allpixcLcLMCParticle(void *p);
   static void destruct_allpixcLcLMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::MCParticle*)
   {
      ::allpix::MCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::MCParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::MCParticle", ::allpix::MCParticle::Class_Version(), "MCParticle.hpp", 23,
                  typeid(::allpix::MCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::MCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::MCParticle) );
      instance.SetNew(&new_allpixcLcLMCParticle);
      instance.SetNewArray(&newArray_allpixcLcLMCParticle);
      instance.SetDelete(&delete_allpixcLcLMCParticle);
      instance.SetDeleteArray(&deleteArray_allpixcLcLMCParticle);
      instance.SetDestructor(&destruct_allpixcLcLMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::MCParticle*)
   {
      return GenerateInitInstanceLocal((::allpix::MCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::MCParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLDepositedCharge(void *p = 0);
   static void *newArray_allpixcLcLDepositedCharge(Long_t size, void *p);
   static void delete_allpixcLcLDepositedCharge(void *p);
   static void deleteArray_allpixcLcLDepositedCharge(void *p);
   static void destruct_allpixcLcLDepositedCharge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::DepositedCharge*)
   {
      ::allpix::DepositedCharge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::DepositedCharge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::DepositedCharge", ::allpix::DepositedCharge::Class_Version(), "DepositedCharge.hpp", 23,
                  typeid(::allpix::DepositedCharge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::DepositedCharge::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::DepositedCharge) );
      instance.SetNew(&new_allpixcLcLDepositedCharge);
      instance.SetNewArray(&newArray_allpixcLcLDepositedCharge);
      instance.SetDelete(&delete_allpixcLcLDepositedCharge);
      instance.SetDeleteArray(&deleteArray_allpixcLcLDepositedCharge);
      instance.SetDestructor(&destruct_allpixcLcLDepositedCharge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::DepositedCharge*)
   {
      return GenerateInitInstanceLocal((::allpix::DepositedCharge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::DepositedCharge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLPropagatedCharge(void *p = 0);
   static void *newArray_allpixcLcLPropagatedCharge(Long_t size, void *p);
   static void delete_allpixcLcLPropagatedCharge(void *p);
   static void deleteArray_allpixcLcLPropagatedCharge(void *p);
   static void destruct_allpixcLcLPropagatedCharge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::PropagatedCharge*)
   {
      ::allpix::PropagatedCharge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::PropagatedCharge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::PropagatedCharge", ::allpix::PropagatedCharge::Class_Version(), "", 214,
                  typeid(::allpix::PropagatedCharge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::PropagatedCharge::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::PropagatedCharge) );
      instance.SetNew(&new_allpixcLcLPropagatedCharge);
      instance.SetNewArray(&newArray_allpixcLcLPropagatedCharge);
      instance.SetDelete(&delete_allpixcLcLPropagatedCharge);
      instance.SetDeleteArray(&deleteArray_allpixcLcLPropagatedCharge);
      instance.SetDestructor(&destruct_allpixcLcLPropagatedCharge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::PropagatedCharge*)
   {
      return GenerateInitInstanceLocal((::allpix::PropagatedCharge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::PropagatedCharge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_Dictionary();
   static void ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::Cartesian2D<unsigned int>*)
   {
      ::ROOT::Math::Cartesian2D<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::Cartesian2D<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::Cartesian2D<unsigned int>", "Math/GenVector/Cartesian2D.h", 37,
                  typeid(::ROOT::Math::Cartesian2D<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::Cartesian2D<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::Cartesian2D<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::Cartesian2D<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::Cartesian2D<unsigned int>*)0x0)->GetClass();
      ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary();
   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p = 0);
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>", "Math/GenVector/DisplacementVector2D.h", 56,
                  typeid(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>) );
      instance.SetNew(&new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR);

      ::ROOT::AddClassAlternate("ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>","ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,\
ROOT::Math::DefaultCoordinateSystemTag>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)0x0)->GetClass();
      ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLPixel(void *p = 0);
   static void *newArray_allpixcLcLPixel(Long_t size, void *p);
   static void delete_allpixcLcLPixel(void *p);
   static void deleteArray_allpixcLcLPixel(void *p);
   static void destruct_allpixcLcLPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::Pixel*)
   {
      ::allpix::Pixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::Pixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::Pixel", ::allpix::Pixel::Class_Version(), "Pixel.hpp", 24,
                  typeid(::allpix::Pixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::Pixel::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::Pixel) );
      instance.SetNew(&new_allpixcLcLPixel);
      instance.SetNewArray(&newArray_allpixcLcLPixel);
      instance.SetDelete(&delete_allpixcLcLPixel);
      instance.SetDeleteArray(&deleteArray_allpixcLcLPixel);
      instance.SetDestructor(&destruct_allpixcLcLPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::Pixel*)
   {
      return GenerateInitInstanceLocal((::allpix::Pixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::Pixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLPixelCharge(void *p = 0);
   static void *newArray_allpixcLcLPixelCharge(Long_t size, void *p);
   static void delete_allpixcLcLPixelCharge(void *p);
   static void deleteArray_allpixcLcLPixelCharge(void *p);
   static void destruct_allpixcLcLPixelCharge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::PixelCharge*)
   {
      ::allpix::PixelCharge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::PixelCharge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::PixelCharge", ::allpix::PixelCharge::Class_Version(), "", 366,
                  typeid(::allpix::PixelCharge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::PixelCharge::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::PixelCharge) );
      instance.SetNew(&new_allpixcLcLPixelCharge);
      instance.SetNewArray(&newArray_allpixcLcLPixelCharge);
      instance.SetDelete(&delete_allpixcLcLPixelCharge);
      instance.SetDeleteArray(&deleteArray_allpixcLcLPixelCharge);
      instance.SetDestructor(&destruct_allpixcLcLPixelCharge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::PixelCharge*)
   {
      return GenerateInitInstanceLocal((::allpix::PixelCharge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::PixelCharge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_allpixcLcLPixelHit(void *p = 0);
   static void *newArray_allpixcLcLPixelHit(Long_t size, void *p);
   static void delete_allpixcLcLPixelHit(void *p);
   static void deleteArray_allpixcLcLPixelHit(void *p);
   static void destruct_allpixcLcLPixelHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::allpix::PixelHit*)
   {
      ::allpix::PixelHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::allpix::PixelHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("allpix::PixelHit", ::allpix::PixelHit::Class_Version(), "", 534,
                  typeid(::allpix::PixelHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::allpix::PixelHit::Dictionary, isa_proxy, 4,
                  sizeof(::allpix::PixelHit) );
      instance.SetNew(&new_allpixcLcLPixelHit);
      instance.SetNewArray(&newArray_allpixcLcLPixelHit);
      instance.SetDelete(&delete_allpixcLcLPixelHit);
      instance.SetDeleteArray(&deleteArray_allpixcLcLPixelHit);
      instance.SetDestructor(&destruct_allpixcLcLPixelHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::allpix::PixelHit*)
   {
      return GenerateInitInstanceLocal((::allpix::PixelHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::allpix::PixelHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr Object::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Object::Class_Name()
{
   return "allpix::Object";
}

//______________________________________________________________________________
const char *Object::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::Object*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Object::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::Object*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Object::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::Object*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Object::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::Object*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr SensorCharge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SensorCharge::Class_Name()
{
   return "allpix::SensorCharge";
}

//______________________________________________________________________________
const char *SensorCharge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::SensorCharge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SensorCharge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::SensorCharge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SensorCharge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::SensorCharge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SensorCharge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::SensorCharge*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr MCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCTrack::Class_Name()
{
   return "allpix::MCTrack";
}

//______________________________________________________________________________
const char *MCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr MCParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCParticle::Class_Name()
{
   return "allpix::MCParticle";
}

//______________________________________________________________________________
const char *MCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::MCParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr DepositedCharge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DepositedCharge::Class_Name()
{
   return "allpix::DepositedCharge";
}

//______________________________________________________________________________
const char *DepositedCharge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::DepositedCharge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DepositedCharge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::DepositedCharge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DepositedCharge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::DepositedCharge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DepositedCharge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::DepositedCharge*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr PropagatedCharge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PropagatedCharge::Class_Name()
{
   return "allpix::PropagatedCharge";
}

//______________________________________________________________________________
const char *PropagatedCharge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PropagatedCharge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PropagatedCharge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PropagatedCharge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PropagatedCharge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PropagatedCharge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PropagatedCharge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PropagatedCharge*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr Pixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Pixel::Class_Name()
{
   return "allpix::Pixel";
}

//______________________________________________________________________________
const char *Pixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::Pixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Pixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::Pixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Pixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::Pixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Pixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::Pixel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr PixelCharge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PixelCharge::Class_Name()
{
   return "allpix::PixelCharge";
}

//______________________________________________________________________________
const char *PixelCharge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelCharge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PixelCharge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelCharge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PixelCharge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelCharge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PixelCharge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelCharge*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
atomic_TClass_ptr PixelHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PixelHit::Class_Name()
{
   return "allpix::PixelHit";
}

//______________________________________________________________________________
const char *PixelHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PixelHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PixelHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PixelHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::allpix::PixelHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace allpix
namespace allpix {
//______________________________________________________________________________
void Object::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::Object.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::Object::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::Object::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLObject(void *p) {
      return  p ? new(p) ::allpix::Object : new ::allpix::Object;
   }
   static void *newArray_allpixcLcLObject(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::Object[nElements] : new ::allpix::Object[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLObject(void *p) {
      delete ((::allpix::Object*)p);
   }
   static void deleteArray_allpixcLcLObject(void *p) {
      delete [] ((::allpix::Object*)p);
   }
   static void destruct_allpixcLcLObject(void *p) {
      typedef ::allpix::Object current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::Object

namespace allpix {
//______________________________________________________________________________
void SensorCharge::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::SensorCharge.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::SensorCharge::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::SensorCharge::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLSensorCharge(void *p) {
      return  p ? new(p) ::allpix::SensorCharge : new ::allpix::SensorCharge;
   }
   static void *newArray_allpixcLcLSensorCharge(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::SensorCharge[nElements] : new ::allpix::SensorCharge[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLSensorCharge(void *p) {
      delete ((::allpix::SensorCharge*)p);
   }
   static void deleteArray_allpixcLcLSensorCharge(void *p) {
      delete [] ((::allpix::SensorCharge*)p);
   }
   static void destruct_allpixcLcLSensorCharge(void *p) {
      typedef ::allpix::SensorCharge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::SensorCharge

namespace allpix {
//______________________________________________________________________________
void MCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::MCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::MCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::MCTrack::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLMCTrack(void *p) {
      return  p ? new(p) ::allpix::MCTrack : new ::allpix::MCTrack;
   }
   static void *newArray_allpixcLcLMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::MCTrack[nElements] : new ::allpix::MCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLMCTrack(void *p) {
      delete ((::allpix::MCTrack*)p);
   }
   static void deleteArray_allpixcLcLMCTrack(void *p) {
      delete [] ((::allpix::MCTrack*)p);
   }
   static void destruct_allpixcLcLMCTrack(void *p) {
      typedef ::allpix::MCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::MCTrack

namespace allpix {
//______________________________________________________________________________
void MCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::MCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::MCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::MCParticle::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLMCParticle(void *p) {
      return  p ? new(p) ::allpix::MCParticle : new ::allpix::MCParticle;
   }
   static void *newArray_allpixcLcLMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::MCParticle[nElements] : new ::allpix::MCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLMCParticle(void *p) {
      delete ((::allpix::MCParticle*)p);
   }
   static void deleteArray_allpixcLcLMCParticle(void *p) {
      delete [] ((::allpix::MCParticle*)p);
   }
   static void destruct_allpixcLcLMCParticle(void *p) {
      typedef ::allpix::MCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::MCParticle

namespace allpix {
//______________________________________________________________________________
void DepositedCharge::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::DepositedCharge.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::DepositedCharge::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::DepositedCharge::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLDepositedCharge(void *p) {
      return  p ? new(p) ::allpix::DepositedCharge : new ::allpix::DepositedCharge;
   }
   static void *newArray_allpixcLcLDepositedCharge(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::DepositedCharge[nElements] : new ::allpix::DepositedCharge[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLDepositedCharge(void *p) {
      delete ((::allpix::DepositedCharge*)p);
   }
   static void deleteArray_allpixcLcLDepositedCharge(void *p) {
      delete [] ((::allpix::DepositedCharge*)p);
   }
   static void destruct_allpixcLcLDepositedCharge(void *p) {
      typedef ::allpix::DepositedCharge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::DepositedCharge

namespace allpix {
//______________________________________________________________________________
void PropagatedCharge::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::PropagatedCharge.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::PropagatedCharge::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::PropagatedCharge::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLPropagatedCharge(void *p) {
      return  p ? new(p) ::allpix::PropagatedCharge : new ::allpix::PropagatedCharge;
   }
   static void *newArray_allpixcLcLPropagatedCharge(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::PropagatedCharge[nElements] : new ::allpix::PropagatedCharge[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLPropagatedCharge(void *p) {
      delete ((::allpix::PropagatedCharge*)p);
   }
   static void deleteArray_allpixcLcLPropagatedCharge(void *p) {
      delete [] ((::allpix::PropagatedCharge*)p);
   }
   static void destruct_allpixcLcLPropagatedCharge(void *p) {
      typedef ::allpix::PropagatedCharge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::PropagatedCharge

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<unsigned int> : new ::ROOT::Math::Cartesian2D<unsigned int>;
   }
   static void *newArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::Cartesian2D<unsigned int>[nElements] : new ::ROOT::Math::Cartesian2D<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p) {
      delete ((::ROOT::Math::Cartesian2D<unsigned int>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p) {
      delete [] ((::ROOT::Math::Cartesian2D<unsigned int>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLCartesian2DlEunsignedsPintgR(void *p) {
      typedef ::ROOT::Math::Cartesian2D<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::Cartesian2D<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag> : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>;
   }
   static void *newArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>[nElements] : new ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void deleteArray_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      delete [] ((::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>*)p);
   }
   static void destruct_ROOTcLcLMathcLcLDisplacementVector2DlEROOTcLcLMathcLcLCartesian2DlEunsignedsPintgRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggR(void *p) {
      typedef ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>

namespace allpix {
//______________________________________________________________________________
void Pixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::Pixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::Pixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::Pixel::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLPixel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::allpix::Pixel : new ::allpix::Pixel;
   }
   static void *newArray_allpixcLcLPixel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::allpix::Pixel[nElements] : new ::allpix::Pixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLPixel(void *p) {
      delete ((::allpix::Pixel*)p);
   }
   static void deleteArray_allpixcLcLPixel(void *p) {
      delete [] ((::allpix::Pixel*)p);
   }
   static void destruct_allpixcLcLPixel(void *p) {
      typedef ::allpix::Pixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::Pixel

namespace allpix {
//______________________________________________________________________________
void PixelCharge::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::PixelCharge.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::PixelCharge::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::PixelCharge::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLPixelCharge(void *p) {
      return  p ? new(p) ::allpix::PixelCharge : new ::allpix::PixelCharge;
   }
   static void *newArray_allpixcLcLPixelCharge(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::PixelCharge[nElements] : new ::allpix::PixelCharge[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLPixelCharge(void *p) {
      delete ((::allpix::PixelCharge*)p);
   }
   static void deleteArray_allpixcLcLPixelCharge(void *p) {
      delete [] ((::allpix::PixelCharge*)p);
   }
   static void destruct_allpixcLcLPixelCharge(void *p) {
      typedef ::allpix::PixelCharge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::PixelCharge

namespace allpix {
//______________________________________________________________________________
void PixelHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class allpix::PixelHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(allpix::PixelHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(allpix::PixelHit::Class(),this);
   }
}

} // namespace allpix
namespace ROOT {
   // Wrappers around operator new
   static void *new_allpixcLcLPixelHit(void *p) {
      return  p ? new(p) ::allpix::PixelHit : new ::allpix::PixelHit;
   }
   static void *newArray_allpixcLcLPixelHit(Long_t nElements, void *p) {
      return p ? new(p) ::allpix::PixelHit[nElements] : new ::allpix::PixelHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_allpixcLcLPixelHit(void *p) {
      delete ((::allpix::PixelHit*)p);
   }
   static void deleteArray_allpixcLcLPixelHit(void *p) {
      delete [] ((::allpix::PixelHit*)p);
   }
   static void destruct_allpixcLcLPixelHit(void *p) {
      typedef ::allpix::PixelHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::allpix::PixelHit

namespace ROOT {
   static TClass *vectorlEallpixcLcLObjectmUgR_Dictionary();
   static void vectorlEallpixcLcLObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlEallpixcLcLObjectmUgR(void *p = 0);
   static void *newArray_vectorlEallpixcLcLObjectmUgR(Long_t size, void *p);
   static void delete_vectorlEallpixcLcLObjectmUgR(void *p);
   static void deleteArray_vectorlEallpixcLcLObjectmUgR(void *p);
   static void destruct_vectorlEallpixcLcLObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<allpix::Object*>*)
   {
      vector<allpix::Object*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<allpix::Object*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<allpix::Object*>", -2, "vector", 447,
                  typeid(vector<allpix::Object*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEallpixcLcLObjectmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<allpix::Object*>) );
      instance.SetNew(&new_vectorlEallpixcLcLObjectmUgR);
      instance.SetNewArray(&newArray_vectorlEallpixcLcLObjectmUgR);
      instance.SetDelete(&delete_vectorlEallpixcLcLObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEallpixcLcLObjectmUgR);
      instance.SetDestructor(&destruct_vectorlEallpixcLcLObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<allpix::Object*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<allpix::Object*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEallpixcLcLObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<allpix::Object*>*)0x0)->GetClass();
      vectorlEallpixcLcLObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEallpixcLcLObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEallpixcLcLObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<allpix::Object*> : new vector<allpix::Object*>;
   }
   static void *newArray_vectorlEallpixcLcLObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<allpix::Object*>[nElements] : new vector<allpix::Object*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEallpixcLcLObjectmUgR(void *p) {
      delete ((vector<allpix::Object*>*)p);
   }
   static void deleteArray_vectorlEallpixcLcLObjectmUgR(void *p) {
      delete [] ((vector<allpix::Object*>*)p);
   }
   static void destruct_vectorlEallpixcLcLObjectmUgR(void *p) {
      typedef vector<allpix::Object*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<allpix::Object*>

namespace ROOT {
   static TClass *vectorlETRefgR_Dictionary();
   static void vectorlETRefgR_TClassManip(TClass*);
   static void *new_vectorlETRefgR(void *p = 0);
   static void *newArray_vectorlETRefgR(Long_t size, void *p);
   static void delete_vectorlETRefgR(void *p);
   static void deleteArray_vectorlETRefgR(void *p);
   static void destruct_vectorlETRefgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TRef>*)
   {
      vector<TRef> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TRef>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TRef>", -2, "vector", 447,
                  typeid(vector<TRef>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETRefgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TRef>) );
      instance.SetNew(&new_vectorlETRefgR);
      instance.SetNewArray(&newArray_vectorlETRefgR);
      instance.SetDelete(&delete_vectorlETRefgR);
      instance.SetDeleteArray(&deleteArray_vectorlETRefgR);
      instance.SetDestructor(&destruct_vectorlETRefgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TRef> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TRef>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETRefgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TRef>*)0x0)->GetClass();
      vectorlETRefgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETRefgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETRefgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TRef> : new vector<TRef>;
   }
   static void *newArray_vectorlETRefgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TRef>[nElements] : new vector<TRef>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETRefgR(void *p) {
      delete ((vector<TRef>*)p);
   }
   static void deleteArray_vectorlETRefgR(void *p) {
      delete [] ((vector<TRef>*)p);
   }
   static void destruct_vectorlETRefgR(void *p) {
      typedef vector<TRef> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TRef>

namespace {
  void TriggerDictionaryInitialization_libAllpixObjects_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/objects",
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src",
"/Applications/root_v6.10.08/include",
"/Applications/root_v6.10.08/include",
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/objects/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAllpixObjects dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace allpix{class Object;}
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$iosfwd")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace allpix{class SensorCharge;}
namespace allpix{class __attribute__((annotate("$clingAutoload$MCTrack.hpp")))  __attribute__((annotate("$clingAutoload$DepositedCharge.hpp")))  MCTrack;}
namespace allpix{class __attribute__((annotate("$clingAutoload$MCParticle.hpp")))  __attribute__((annotate("$clingAutoload$DepositedCharge.hpp")))  MCParticle;}
namespace allpix{class __attribute__((annotate("$clingAutoload$DepositedCharge.hpp")))  DepositedCharge;}
namespace allpix{class PropagatedCharge;}
namespace ROOT{namespace Math{template <class T = double> class __attribute__((annotate("$clingAutoload$Math/GenVector/Cartesian2D.h")))  __attribute__((annotate("$clingAutoload$Math/DisplacementVector2D.h")))  Cartesian2D;
}}
namespace ROOT{namespace Math{class __attribute__((annotate("$clingAutoload$Math/GenVector/CoordinateSystemTags.h")))  __attribute__((annotate("$clingAutoload$Math/Point3D.h")))  DefaultCoordinateSystemTag;}}
namespace ROOT{namespace Math{template <class CoordSystem, class Tag = ROOT::Math::DefaultCoordinateSystemTag> class __attribute__((annotate("$clingAutoload$Math/GenVector/DisplacementVector2D.h")))  __attribute__((annotate("$clingAutoload$Math/DisplacementVector2D.h")))  DisplacementVector2D;
}}
namespace allpix{class __attribute__((annotate("$clingAutoload$Pixel.hpp")))  Pixel;}
namespace allpix{class PixelCharge;}
namespace allpix{class PixelHit;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAllpixObjects dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
 * @file
 * @brief Definition of Object base class
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

/**
 * @defgroup Objects Objects
 * @brief Collection of objects passed around between modules
 */

#ifndef ALLPIX_OBJECT_H
#define ALLPIX_OBJECT_H

#include <iostream>

#include <TObject.h>

namespace allpix {
    template <typename T> class Message;

    /**
     * @ingroup Objects
     * @brief Base class for internal objects
     */
    class Object : public TObject {
    public:
        friend std::ostream& operator<<(std::ostream& out, const allpix::Object& obj);

        /**
         * @brief Required default constructor
         */
        Object() = default;
        /**
         * @brief Required virtual destructor
         */
        ~Object() override = default;

        /// @{
        /**
         * @brief Use default copy behaviour
         */
        Object(const Object&);
        Object& operator=(const Object&);
        /// @}

        /// @{
        /**
         * @brief Use default move behaviour
         */
        Object(Object&&);
        Object& operator=(Object&&);
        /// @}

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(Object, 2);

    protected:
        /**
         * @brief Print an ASCII representation of this Object to the given stream
         * @param out Stream to print to
         */
        virtual void print(std::ostream& out) const { out << "<unknown object>"; };

        /**
         * @brief Override function to implement ROOT Print()
         * @warning Should not be used inside the framework but might assist in inspecting ROOT files with these objects.
         */
        void Print(Option_t*) const override {
            print(std::cout);
            std::cout << std::endl;
        }
    };

    /**
     * @brief Overloaded ostream operator for printing of object data
     * @param out Stream to write output to
     * @param obj Object to print to stream
     * @return Stream where output was written to
     */
    std::ostream& operator<<(std::ostream& out, const allpix::Object& obj);

} // namespace allpix

#endif
/**
 * @file
 * @brief Implementation of object for charges in sensor
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_SENSOR_CHARGE_H
#define ALLPIX_SENSOR_CHARGE_H

#include <Math/Point3D.h>

#include "Object.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Flags to distinguish between eletron and hole charge carriers
     */
    enum class CarrierType : int8_t { ELECTRON = -1, HOLE = 1 };

    inline std::ostream& operator<<(std::ostream& os, const CarrierType type) {
        os << (type == CarrierType::ELECTRON ? "\"e\"" : "\"h\"");
        return os;
    }

    /**
     * @ingroup Objects
     * @brief Base object for charge deposits and propagated charges in the sensor
     */
    class SensorCharge : public Object {
    public:
        /**
         * @brief Construct a set of charges in a sensor
         * @param local_position Local position of the set of charges in the sensor
         * @param global_position Global position of the set of charges in the sensor
         * @param type Type of the carrier
         * @param charge Total charge at position
         * @param event_time Total time after event start
         */
        SensorCharge(ROOT::Math::XYZPoint local_position,
                     ROOT::Math::XYZPoint global_position,
                     CarrierType type,
                     unsigned int charge,
                     double event_time);

        /**
         * @brief Get local position of the set of charges in the sensor
         * @return Local position of charges
         */
        ROOT::Math::XYZPoint getLocalPosition() const;

        /**
         * @brief Get the global position of the set of charges in the sensor
         */
        ROOT::Math::XYZPoint getGlobalPosition() const;

        /**
         * @brief Get the type of charge carrier
         * @return Type of charge carrier
         */
        CarrierType getType() const;
        /**
         * @brief Get total amount of charges stored
         * @return Total charge stored
         */
        unsigned int getCharge() const;
        /**
         * @brief Get time after start of event
         * @return Time from start event
         */
        double getEventTime() const;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(SensorCharge, 2);
        /**
         * @brief Default constructor for ROOT I/O
         */
        SensorCharge() = default;

    private:
        ROOT::Math::XYZPoint local_position_;
        ROOT::Math::XYZPoint global_position_;

        CarrierType type_{};
        unsigned int charge_{};
        double event_time_{};
    };
} // namespace allpix

#endif /* ALLPIX_SENSOR_CHARGE_H */
/**
 * @file
 * @brief Definition of propagated charge object
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_PROPAGATED_CHARGE_H
#define ALLPIX_PROPAGATED_CHARGE_H

#include "DepositedCharge.hpp"
#include "MCParticle.hpp"
#include "SensorCharge.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Set of charges propagated through the sensor
     */
    class PropagatedCharge : public SensorCharge {
    public:
        /**
         * @brief Construct a set of propagated charges
         * @param local_position Local position of the propagated set of charges in the sensor
         * @param global_position Global position of the propagated set of charges in the sensor
         * @param type Type of the carrier to propagate
         * @param charge Total charge propagated
         * @param event_time Total time of propagation arrival after event start
         * @param deposited_charge Optional pointer to related deposited charge
         */
        PropagatedCharge(ROOT::Math::XYZPoint local_position,
                         ROOT::Math::XYZPoint global_position,
                         CarrierType type,
                         unsigned int charge,
                         double event_time,
                         const DepositedCharge* deposited_charge = nullptr);

        /**
         * @brief Get related deposited charge
         * @return Pointer to possible deposited charge
         */
        const DepositedCharge* getDepositedCharge() const;

        /**
         * @brief Get related Monte-Carlo particle
         * @return Pointer to Monte-Carlo particle
         */
        const MCParticle* getMCParticle() const;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(PropagatedCharge, 3);
        /**
         * @brief Default constructor for ROOT I/O
         */
        PropagatedCharge() = default;

    private:
        TRef deposited_charge_;
        TRef mc_particle_{nullptr};
    };

    /**
     * @brief Typedef for message carrying propagated charges
     */
    using PropagatedChargeMessage = Message<PropagatedCharge>;
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of deposited charge object
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_DEPOSITED_CHARGE_H
#define ALLPIX_DEPOSITED_CHARGE_H

#include <TRef.h>

#include "MCParticle.hpp"
#include "SensorCharge.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Charge deposit in sensor of detector
     */
    class DepositedCharge : public SensorCharge {
    public:
        /**
         * @brief Construct a charge deposit
         * @param local_position Local position of the deposit in the sensor
         * @param global_position Global position of the propagated set of charges in the sensor
         * @param type Type of the carrier
         * @param charge Total charge of the deposit
         * @param event_time Time of deposition after event start
         * @param mc_particle Optional pointer to related MC particle
         */
        DepositedCharge(ROOT::Math::XYZPoint local_position,
                        ROOT::Math::XYZPoint global_position,
                        CarrierType type,
                        unsigned int charge,
                        double event_time,
                        const MCParticle* mc_particle = nullptr);

        /**
         * @brief Get related Monte-Carlo particle
         * @return Pointer to possible Monte-Carlo particle
         */
        const MCParticle* getMCParticle() const;

        /**
         * @brief Set the Monte-Carlo particle
         * @param mc_particle The Monte-Carlo particle
         * @warning Special method because MCParticle is only known after deposit creation, should not be replaced later.
         */
        void setMCParticle(const MCParticle* mc_particle);

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(DepositedCharge, 2);
        /**
         * @brief Default constructor for ROOT I/O
         */
        DepositedCharge() = default;

    private:
        TRef mc_particle_;
    };

    /**
     * @brief Typedef for message carrying deposits
     */
    using DepositedChargeMessage = Message<DepositedCharge>;
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of object with set of particles at pixel
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_PIXEL_CHARGE_H
#define ALLPIX_PIXEL_CHARGE_H

#include <Math/DisplacementVector2D.h>
#include <TRef.h>
#include <algorithm>

#include "MCParticle.hpp"
#include "Object.hpp"
#include "Pixel.hpp"
#include "PropagatedCharge.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Set of charges at a pixel
     */
    class PixelCharge : public Object {
    public:
        /**
         * @brief Construct a set of charges at a pixel
         * @param pixel Object holding the information of the pixel
         * @param charge Amount of charge stored at this pixel
         * @param propagated_charges Optional pointer to the related propagated charges
         */
        PixelCharge(Pixel pixel,
                    unsigned int charge,
                    std::vector<const PropagatedCharge*> propagated_charges = std::vector<const PropagatedCharge*>());

        /**
         * @brief Get the pixel containing the charges
         * @return Pixel indices in the grid
         */
        const Pixel& getPixel() const;
        /**
         * @brief Shortcut to retrieve the pixel indices
         * @return Index of the pixel
         */
        Pixel::Index getIndex() const;
        /**
         * @brief Get the charge at the pixel
         * @return Total charge stored
         */
        unsigned int getCharge() const;

        /**
         * @brief Get related propagated charges
         * @return Possible set of pointers to propagated charges
         */
        std::vector<const PropagatedCharge*> getPropagatedCharges() const;
        /**
         * @brief Get the Monte-Carlo particles resulting in this pixel hit
         * @return List of all related Monte-Carlo particles
         */
        std::vector<const MCParticle*> getMCParticles() const;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(PixelCharge, 4);
        /**
         * @brief Default constructor for ROOT I/O
         */
        PixelCharge() = default;

    private:
        Pixel pixel_;
        unsigned int charge_{};

        std::vector<TRef> propagated_charges_;
        std::vector<TRef> mc_particles_;
    };

    /**
     * @brief Typedef for message carrying pixel charges
     */
    using PixelChargeMessage = Message<PixelCharge>;
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of pixel object
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_PIXEL_H
#define ALLPIX_PIXEL_H

#include <Math/DisplacementVector2D.h>
#include <Math/Point3D.h>
#include <Math/Vector2D.h>
#include <TObject.h>

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Pixel in the model with indices, location and size
     * @warning This object is special and is not meant to be written directly to a tree (not inheriting from \ref Object)
     */
    class Pixel {
    public:
        using Index = ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>>;

        /**
         * @brief Construct a new pixel
         */
        Pixel(Pixel::Index index,
              ROOT::Math::XYZPoint local_center,
              ROOT::Math::XYZPoint global_center,
              ROOT::Math::XYVector size);

        /**
         * @brief Return index pair of pixel
         * @return Index in x,y-plane
         */
        Pixel::Index getIndex() const;

        /**
         * @brief Get center position in local coordinates
         * @return Local center position
         */
        ROOT::Math::XYZPoint getLocalCenter() const;
        /**
         * @brief Get center position in global coordinates
         * @return Global center position
         */
        ROOT::Math::XYZPoint getGlobalCenter() const;
        /**
         * @brief Get size of pixel
         * @return Pixel size
         */
        ROOT::Math::XYVector getSize() const;

        /**
         * @brief ROOT class definition
         */
        Pixel() = default;
        /**
         * @brief Default constructor for ROOT I/O
         */
        ClassDef(Pixel, 1);

    private:
        Pixel::Index index_;

        ROOT::Math::XYZPoint local_center_;
        ROOT::Math::XYZPoint global_center_;
        ROOT::Math::XYVector size_;
    };
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of object with digitized pixel hit
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_PIXEL_HIT_H
#define ALLPIX_PIXEL_HIT_H

#include <Math/DisplacementVector2D.h>

#include <TRef.h>

#include "MCParticle.hpp"
#include "Object.hpp"
#include "PixelCharge.hpp"

#include "Pixel.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Pixel triggered in an event after digitization
     */
    class PixelHit : public Object {
    public:
        /**
         * @brief Construct a digitized pixel hit
         * @param pixel Object holding the information of the pixel
         * @param time Timing of the occurence of the hit
         * @param signal Signal data produced by the digitizer
         * @param pixel_charge Optional pointer to the related pixel charge
         */
        PixelHit(Pixel pixel, double time, double signal, const PixelCharge* pixel_charge = nullptr);

        /**
         * @brief Get the pixel hit
         * @return Pixel indices in the grid
         */
        const Pixel& getPixel() const;
        /**
         * @brief Shortcut to retrieve the pixel indices
         * @return Index of the pixel
         */
        Pixel::Index getIndex() const;
        /**
         * @brief Get the timing data of the hit
         * @return Timestamp
         */
        double getTime() const { return time_; }
        /**
         * @brief Get the signal data for the hit
         * @return Digitized signal
         */
        double getSignal() const { return signal_; }

        /**
         * @brief Get related pixel charge
         * @return Possible related pixel charge
         */
        const PixelCharge* getPixelCharge() const;
        /**
         * @brief Get the Monte-Carlo particles resulting in this pixel hit
         * @return List of all related Monte-Carlo particles
         */
        std::vector<const MCParticle*> getMCParticles() const;

        /**
         * @brief Print an ASCII representation of PixelHit to the given stream
         * @param out Stream to print to
         */
        void print(std::ostream& out) const override;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(PixelHit, 4);
        /**
         * @brief Default constructor for ROOT I/O
         */
        PixelHit() = default;

    private:
        Pixel pixel_;
        double time_{};
        double signal_{};

        TRef pixel_charge_;
        std::vector<TRef> mc_particles_;
    };

    /**
     * @brief Typedef for message carrying pixel hits
     */
    using PixelHitMessage = Message<PixelHit>;
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of Monte-Carlo particle object
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_MC_PARTICLE_H
#define ALLPIX_MC_PARTICLE_H

#include <Math/Point3D.h>
#include <TRef.h>

#include "MCTrack.hpp"
#include "Object.hpp"

namespace allpix {
    /**
     * @brief Monte-Carlo particle through the sensor
     */
    class MCParticle : public Object {
    public:
        /**
         * @brief Construct a Monte-Carlo particle
         * @param local_start_point Entry point of the particle in the sensor in local coordinates
         * @param global_start_point Entry point of the particle in the sensor in global coordinates
         * @param local_end_point Exit point of the particle in the sensor in local coordinates
         * @param global_end_point Exit point of the particle in the sensor in global coordinates
         * @param particle_id PDG id for this particle type
         * @param time The arrival time of the particle in the sensor
         */
        MCParticle(ROOT::Math::XYZPoint local_start_point,
                   ROOT::Math::XYZPoint global_start_point,
                   ROOT::Math::XYZPoint local_end_point,
                   ROOT::Math::XYZPoint global_end_point,
                   int particle_id,
                   double time);

        /**
         * @brief Get the entry point of the particle in local coordinates
         * @return Particle entry point
         */
        ROOT::Math::XYZPoint getLocalStartPoint() const;
        /**
         * @brief Get the entry point of the particle in global coordinates
         * @return Particle entry point
         */
        ROOT::Math::XYZPoint getGlobalStartPoint() const;

        /**
         * @brief Get the exit point of the particle in local coordinates
         * @return Particle exit point
         */
        ROOT::Math::XYZPoint getLocalEndPoint() const;
        /**
         * @brief Get the entry point of the particle in global coordinates
         * @return Particle entry point
         */
        ROOT::Math::XYZPoint getGlobalEndPoint() const;

        /**
         * @brief Get PDG particle id for the particle
         * @return Particle id
         */
        int getParticleID() const;

        /**
         * @brief Get the arrival time for the particle
         * @return Arrival time of the particle in the respective sensor
         */
        double getTime() const;

        /**
         * @brief Set the Monte-Carlo particle
         * @param mc_particle The Monte-Carlo particle
         * @warning Special method because parent can only be set after creation, should not be replaced later.
         */
        void setParent(const MCParticle* mc_particle);
        /**
         * @brief Get the parent MCParticle if it has one
         * @return Parent MCParticle or null pointer if it has no parent
         * @warning No \ref MissingReferenceException is thrown, because a particle without parent should always be handled.
         */
        const MCParticle* getParent() const;

        /**
         * @brief Set the MCParticle's track
         * @param mc_track The track
         * @warning Special method because track can only be set after creation, should not be replaced later.
         */
        void setTrack(const MCTrack* mc_track);

        /**
         * @brief Get the MCTrack of this MCParticle
         * @return Parent MCTrack or null pointer if it has no track
         * @warning No \ref MissingReferenceException is thrown, because a particle without a track should always be handled.
         */
        const MCTrack* getTrack() const;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(MCParticle, 6);
        /**
         * @brief Default constructor for ROOT I/O
         */
        MCParticle() = default;

        /**
         * @brief Print an ASCII representation of MCParticle to the given stream
         * @param out Stream to print to
         */
        void print(std::ostream& out) const override;

    private:
        ROOT::Math::XYZPoint local_start_point_{};
        ROOT::Math::XYZPoint global_start_point_{};
        ROOT::Math::XYZPoint local_end_point_{};
        ROOT::Math::XYZPoint global_end_point_{};

        int particle_id_{};
        double time_{};

        TRef parent_;
        TRef track_;
    };

    /**
     * @brief Typedef for message carrying MC particles
     */
    using MCParticleMessage = Message<MCParticle>;
} // namespace allpix

#endif
/**
 * @file
 * @brief Definition of Monte-Carlo track object
 * @copyright Copyright (c) 2018 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_MC_TRACK_H
#define ALLPIX_MC_TRACK_H

#include <Math/Point3D.h>
#include <TRef.h>

#include "Object.hpp"

namespace allpix {
    /**
     * @brief Monte-Carlo track through the world
     */
    class MCTrack : public Object {
    public:
        /**
         * @brief Construct a Monte-Carlo track
         * @param start_point Global point where track came into existance
         * @param end_point Global point where track went out of existance
         * @param g4_volume Geant4 volume where track originated in
         * @param g4_prod_process_name Geant4 creation process name
         * @param g4_prod_process_type Geant4 creation process id
         * @param particle_id PDG particle id
         * @param initial_kin_E Initial kinetic energy (in MeV)
         * @param final_kin_E Final kinetic energy (in MeV)
         * @param initial_tot_E Initial total energy (in MeV)
         * @param final_tot_E Final total energy (in MeV)
         */
        MCTrack(ROOT::Math::XYZPoint start_point,
                ROOT::Math::XYZPoint end_point,
                std::string g4_volume,
                std::string g4_prod_process_name,
                int g4_prod_process_type,
                int particle_id,
                double initial_kin_E,
                double final_kin_E,
                double initial_tot_E,
                double final_tot_E);

        /**
         * @brief Get the point of where the track originated
         * @return Track start point
         */
        ROOT::Math::XYZPoint getStartPoint() const;

        /**
         * @brief Get the point of where the track terminated
         * @return Track end point
         */
        ROOT::Math::XYZPoint getEndPoint() const;

        /**
         * @brief Get PDG particle id for the particle
         * @return Particle id
         */
        int getParticleID() const;

        /**
         * @brief Get the Geant4 internal ID of the process which created the particle
         * @return The Geant4 process type or "-1" if no such process exists
         */
        int getCreationProcessType() const;

        /**
         * @brief Get the amount of stepping steps the Geant4 track made
         * @return The amount of steps
         */
        int getNumberOfSteps() const;

        /**
         * @brief Getter for the kinetic energy the particle had when the track was created
         * @return The kinetic energy in MeV of the particle at the beginning of the track
         */
        double getKineticEnergyInitial() const;
        /**
         * @brief Getter for the total energy (i.e. kinetic energy and dynamic mass) the particle had when the track was
         * created
         * @return The total energy in MeV of the particle at the beginning of the track
         */
        double getTotalEnergyInitial() const;

        /**
         * @brief Getter for the kinetic energy the particle had when the track terminated
         * @return The kinetic energy in MeV of the particle at the end of the track
         */
        double getKineticEnergyFinal() const;

        /**
         * @brief Getter for the total energy (i.e. kinetic energy and dynamic mass) the particle had when the track
         * terminated
         * @return The total energy in MeV of the particle at the end of the track
         */
        double getTotalEnergyFinal() const;

        /**
         * @brief Getter for the Geant4 name of the physical volume in which the track originated
         * @return The name of the phyical volume
         */
        std::string getOriginatingVolumeName() const;

        /**
         * @brief Getter for the name of the process which created this particle
         * @return The process name or "none" if no such process exists
         */
        std::string getCreationProcessName() const;

        /**
         * @brief Get the parent MCTrack if it has one
         * @return Parent MCTrack or null pointer if it has no parent
         * @warning No \ref MissingReferenceException is thrown, because a track without parent should always be handled.
         */
        const MCTrack* getParent() const;

        /**
         * @brief Set the Monte-Carlo parent track
         * @param mc_track The Monte-Carlo track
         * @warning Special method because parent can only be set after creation, should not be replaced later.
         */
        void setParent(const MCTrack* mc_track);

        /**
         * @brief Print an ASCII representation of MCTrack to the given stream
         * @param out Stream to print to
         */
        void print(std::ostream& out) const override;

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(MCTrack, 1);
        /**
         * @brief Default constructor for ROOT I/O
         */
        MCTrack() = default;

    private:
        ROOT::Math::XYZPoint start_point_{};
        ROOT::Math::XYZPoint end_point_{};

        std::string origin_g4_vol_name_{};
        std::string origin_g4_process_name_{};

        int origin_g4_process_type_{};
        int particle_id_{};
        int n_steps_{};

        double initial_kin_E_{};
        double final_kin_E_{};
        double initial_tot_E_{};
        double final_tot_E_{};

        TRef parent_;
    };

    /**
     * @brief Typedef for message carrying MC tracks
     */
    using MCTrackMessage = Message<MCTrack>;
} // namespace allpix

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ROOT::Math::Cartesian2D<unsigned int>", payloadCode, "@",
"ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,ROOT::Math::DefaultCoordinateSystemTag>", payloadCode, "@",
"ROOT::Math::DisplacementVector2D<ROOT::Math::Cartesian2D<unsigned int>,\
ROOT::Math::DefaultCoordinateSystemTag>", payloadCode, "@",
"allpix::DepositedCharge", payloadCode, "@",
"allpix::MCParticle", payloadCode, "@",
"allpix::MCTrack", payloadCode, "@",
"allpix::Object", payloadCode, "@",
"allpix::Pixel", payloadCode, "@",
"allpix::PixelCharge", payloadCode, "@",
"allpix::PixelHit", payloadCode, "@",
"allpix::PropagatedCharge", payloadCode, "@",
"allpix::SensorCharge", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAllpixObjects",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAllpixObjects_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAllpixObjects_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAllpixObjects() {
  TriggerDictionaryInitialization_libAllpixObjects_Impl();
}
