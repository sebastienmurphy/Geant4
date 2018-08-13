// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CorryvreckanObjectsDictionary

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
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/CorryvreckanWriter/corryvreckan/Object.hpp"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/CorryvreckanWriter/corryvreckan/Pixel.h"
#include "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/CorryvreckanWriter/corryvreckan/MCParticle.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_corryvreckancLcLObject(void *p = 0);
   static void *newArray_corryvreckancLcLObject(Long_t size, void *p);
   static void delete_corryvreckancLcLObject(void *p);
   static void deleteArray_corryvreckancLcLObject(void *p);
   static void destruct_corryvreckancLcLObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::corryvreckan::Object*)
   {
      ::corryvreckan::Object *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::corryvreckan::Object >(0);
      static ::ROOT::TGenericClassInfo 
         instance("corryvreckan::Object", ::corryvreckan::Object::Class_Version(), "", 36,
                  typeid(::corryvreckan::Object), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::corryvreckan::Object::Dictionary, isa_proxy, 4,
                  sizeof(::corryvreckan::Object) );
      instance.SetNew(&new_corryvreckancLcLObject);
      instance.SetNewArray(&newArray_corryvreckancLcLObject);
      instance.SetDelete(&delete_corryvreckancLcLObject);
      instance.SetDeleteArray(&deleteArray_corryvreckancLcLObject);
      instance.SetDestructor(&destruct_corryvreckancLcLObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::corryvreckan::Object*)
   {
      return GenerateInitInstanceLocal((::corryvreckan::Object*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::corryvreckan::Object*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_corryvreckancLcLPixel(void *p = 0);
   static void *newArray_corryvreckancLcLPixel(Long_t size, void *p);
   static void delete_corryvreckancLcLPixel(void *p);
   static void deleteArray_corryvreckancLcLPixel(void *p);
   static void destruct_corryvreckancLcLPixel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::corryvreckan::Pixel*)
   {
      ::corryvreckan::Pixel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::corryvreckan::Pixel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("corryvreckan::Pixel", ::corryvreckan::Pixel::Class_Version(), "", 79,
                  typeid(::corryvreckan::Pixel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::corryvreckan::Pixel::Dictionary, isa_proxy, 4,
                  sizeof(::corryvreckan::Pixel) );
      instance.SetNew(&new_corryvreckancLcLPixel);
      instance.SetNewArray(&newArray_corryvreckancLcLPixel);
      instance.SetDelete(&delete_corryvreckancLcLPixel);
      instance.SetDeleteArray(&deleteArray_corryvreckancLcLPixel);
      instance.SetDestructor(&destruct_corryvreckancLcLPixel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::corryvreckan::Pixel*)
   {
      return GenerateInitInstanceLocal((::corryvreckan::Pixel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::corryvreckan::Pixel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_corryvreckancLcLMCParticle(void *p = 0);
   static void *newArray_corryvreckancLcLMCParticle(Long_t size, void *p);
   static void delete_corryvreckancLcLMCParticle(void *p);
   static void deleteArray_corryvreckancLcLMCParticle(void *p);
   static void destruct_corryvreckancLcLMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::corryvreckan::MCParticle*)
   {
      ::corryvreckan::MCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::corryvreckan::MCParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("corryvreckan::MCParticle", ::corryvreckan::MCParticle::Class_Version(), "", 119,
                  typeid(::corryvreckan::MCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::corryvreckan::MCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::corryvreckan::MCParticle) );
      instance.SetNew(&new_corryvreckancLcLMCParticle);
      instance.SetNewArray(&newArray_corryvreckancLcLMCParticle);
      instance.SetDelete(&delete_corryvreckancLcLMCParticle);
      instance.SetDeleteArray(&deleteArray_corryvreckancLcLMCParticle);
      instance.SetDestructor(&destruct_corryvreckancLcLMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::corryvreckan::MCParticle*)
   {
      return GenerateInitInstanceLocal((::corryvreckan::MCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::corryvreckan::MCParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace corryvreckan {
//______________________________________________________________________________
atomic_TClass_ptr Object::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Object::Class_Name()
{
   return "corryvreckan::Object";
}

//______________________________________________________________________________
const char *Object::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Object*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Object::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Object*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Object::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Object*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Object::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Object*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace corryvreckan
namespace corryvreckan {
//______________________________________________________________________________
atomic_TClass_ptr Pixel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Pixel::Class_Name()
{
   return "corryvreckan::Pixel";
}

//______________________________________________________________________________
const char *Pixel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Pixel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Pixel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Pixel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Pixel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Pixel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Pixel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::Pixel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace corryvreckan
namespace corryvreckan {
//______________________________________________________________________________
atomic_TClass_ptr MCParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCParticle::Class_Name()
{
   return "corryvreckan::MCParticle";
}

//______________________________________________________________________________
const char *MCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::MCParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::MCParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::MCParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::corryvreckan::MCParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace corryvreckan
namespace corryvreckan {
//______________________________________________________________________________
void Object::Streamer(TBuffer &R__b)
{
   // Stream an object of class corryvreckan::Object.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(corryvreckan::Object::Class(),this);
   } else {
      R__b.WriteClassBuffer(corryvreckan::Object::Class(),this);
   }
}

} // namespace corryvreckan
namespace ROOT {
   // Wrappers around operator new
   static void *new_corryvreckancLcLObject(void *p) {
      return  p ? new(p) ::corryvreckan::Object : new ::corryvreckan::Object;
   }
   static void *newArray_corryvreckancLcLObject(Long_t nElements, void *p) {
      return p ? new(p) ::corryvreckan::Object[nElements] : new ::corryvreckan::Object[nElements];
   }
   // Wrapper around operator delete
   static void delete_corryvreckancLcLObject(void *p) {
      delete ((::corryvreckan::Object*)p);
   }
   static void deleteArray_corryvreckancLcLObject(void *p) {
      delete [] ((::corryvreckan::Object*)p);
   }
   static void destruct_corryvreckancLcLObject(void *p) {
      typedef ::corryvreckan::Object current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::corryvreckan::Object

namespace corryvreckan {
//______________________________________________________________________________
void Pixel::Streamer(TBuffer &R__b)
{
   // Stream an object of class corryvreckan::Pixel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(corryvreckan::Pixel::Class(),this);
   } else {
      R__b.WriteClassBuffer(corryvreckan::Pixel::Class(),this);
   }
}

} // namespace corryvreckan
namespace ROOT {
   // Wrappers around operator new
   static void *new_corryvreckancLcLPixel(void *p) {
      return  p ? new(p) ::corryvreckan::Pixel : new ::corryvreckan::Pixel;
   }
   static void *newArray_corryvreckancLcLPixel(Long_t nElements, void *p) {
      return p ? new(p) ::corryvreckan::Pixel[nElements] : new ::corryvreckan::Pixel[nElements];
   }
   // Wrapper around operator delete
   static void delete_corryvreckancLcLPixel(void *p) {
      delete ((::corryvreckan::Pixel*)p);
   }
   static void deleteArray_corryvreckancLcLPixel(void *p) {
      delete [] ((::corryvreckan::Pixel*)p);
   }
   static void destruct_corryvreckancLcLPixel(void *p) {
      typedef ::corryvreckan::Pixel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::corryvreckan::Pixel

namespace corryvreckan {
//______________________________________________________________________________
void MCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class corryvreckan::MCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(corryvreckan::MCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(corryvreckan::MCParticle::Class(),this);
   }
}

} // namespace corryvreckan
namespace ROOT {
   // Wrappers around operator new
   static void *new_corryvreckancLcLMCParticle(void *p) {
      return  p ? new(p) ::corryvreckan::MCParticle : new ::corryvreckan::MCParticle;
   }
   static void *newArray_corryvreckancLcLMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::corryvreckan::MCParticle[nElements] : new ::corryvreckan::MCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_corryvreckancLcLMCParticle(void *p) {
      delete ((::corryvreckan::MCParticle*)p);
   }
   static void deleteArray_corryvreckancLcLMCParticle(void *p) {
      delete [] ((::corryvreckan::MCParticle*)p);
   }
   static void destruct_corryvreckancLcLMCParticle(void *p) {
      typedef ::corryvreckan::MCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::corryvreckan::MCParticle

namespace {
  void TriggerDictionaryInitialization_libCorryvreckanObjects_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/CorryvreckanWriter/corryvreckan",
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src",
"/Applications/root_v6.10.08/include",
"/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/CorryvreckanWriter/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCorryvreckanObjects dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace corryvreckan{class Object;}
namespace corryvreckan{class Pixel;}
namespace corryvreckan{class MCParticle;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCorryvreckanObjects dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
 * @file
 * @brief Definition of Object base class
 * @copyright Copyright (c) 2017 CERN and the Corryvreckan authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

/**
 * @defgroup Objects Objects
 * @brief Collection of objects passed around between modules
 */

#ifndef CORRYVRECKAN_OBJECT_H
#define CORRYVRECKAN_OBJECT_H

#include <string>
#include <vector>
#include "TObject.h"
#include "TTree.h"

namespace corryvreckan {

    /**
     * @ingroup Objects
     * @brief Base class for internal objects
     *
     * Generic base class. Every class which inherits from Object can be placed on the clipboard and written out to file.
     */
    class Object : public TObject {

    public:
        // Constructors and destructors
        Object();
        explicit Object(std::string detectorID);
        explicit Object(double timestamp);
        Object(std::string detectorID, double timestamp);
        ~Object() override;

        // Methods to get member variables
        std::string getDetectorID() { return m_detectorID; }
        std::string detectorID() { return getDetectorID(); }

        double timestamp() { return m_timestamp; }
        void timestamp(double time) { m_timestamp = time; }
        void setTimestamp(double time) { timestamp(time); }

        // Methods to set member variables
        void setDetectorID(std::string detectorID) { m_detectorID = std::move(detectorID); }

    protected:
        // Member variables
        std::string m_detectorID;
        double m_timestamp{0};

        // ROOT I/O class definition - update version number when you change this class!
        ClassDefOverride(Object, 2)
    };

    // Vector type declaration
    using Objects = std::vector<Object*>;
} // namespace corryvreckan

#endif // CORRYVRECKAN_OBJECT_H
#ifndef PIXEL_H
#define PIXEL_H 1

#include "Object.hpp"

namespace corryvreckan {

    class Pixel : public Object {

    public:
        // Constructors and destructors
        Pixel() = default;
        virtual ~Pixel() {}
        Pixel(std::string detectorID, int row, int col, int tot) : Pixel(detectorID, row, col, tot, 0.) {}
        Pixel(std::string detectorID, int row, int col, int tot, double timestamp)
            : Object(detectorID, timestamp), m_row(row), m_column(col), m_adc(tot) {}

        int row() { return m_row; }
        int column() { return m_column; }

        int adc() { return m_adc; }
        int tot() { return adc(); }

    private:
        // Member variables
        int m_row;
        int m_column;
        int m_adc;

        // ROOT I/O class definition - update version number when you change this class!
        ClassDef(Pixel, 2)
    };

    // Vector type declaration
    typedef std::vector<Pixel*> Pixels;
} // namespace corryvreckan

#endif // PIXEL_H
#ifndef MCPARTICLE_H
#define MCPARTICLE_H 1

#include <Math/Point3D.h>
#include "Object.hpp"

namespace corryvreckan {

    class MCParticle : public Object {

    public:
        // Constructors and destructors
        MCParticle() = default;
        MCParticle(std::string detectorID,
                   int particle_id,
                   ROOT::Math::XYZPoint local_start_point,
                   ROOT::Math::XYZPoint local_end_point,
                   double timestamp)
            : Object(detectorID, timestamp), m_particle_id(particle_id), m_local_start_point(local_start_point),
              m_local_end_point(local_end_point) {}

        // Member variables
        int m_particle_id;
        ROOT::Math::XYZPoint m_local_start_point;
        ROOT::Math::XYZPoint m_local_end_point;

        // Member functions
        int getID() { return m_particle_id; }
        ROOT::Math::XYZPoint getLocalStart() { return m_local_start_point; }
        ROOT::Math::XYZPoint getLocalEnd() { return m_local_end_point; }

        // ROOT I/O class definition - update version number when you change this class!
        ClassDef(MCParticle, 2)
    };

    // Vector type declaration
    using MCParticles = std::vector<MCParticle*>;
} // namespace corryvreckan

#endif // MCPARTICLE_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"corryvreckan::MCParticle", payloadCode, "@",
"corryvreckan::Object", payloadCode, "@",
"corryvreckan::Pixel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCorryvreckanObjects",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCorryvreckanObjects_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCorryvreckanObjects_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCorryvreckanObjects() {
  TriggerDictionaryInitialization_libCorryvreckanObjects_Impl();
}
