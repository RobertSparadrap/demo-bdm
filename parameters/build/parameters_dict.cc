// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIbdmdIdemodIparametersdIbuilddIparameters_dict
#define R__NO_DEPRECATION

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

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/bdm/demo/parameters/src/parameters.h"

// Header files passed via #pragma extra_include

namespace bdm {
   namespace detail {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLdetail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::detail", 0 /*version*/, "core/util/string.h", 34,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLdetail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLdetail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace memory_manager_detail {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLmemory_manager_detail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::memory_manager_detail", 0 /*version*/, "core/memory/memory_manager.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLmemory_manager_detail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLmemory_manager_detail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace experimental {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLexperimental_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::experimental", 0 /*version*/, "neuroscience/event/neurite_bifurcation_event.h", 24,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLexperimental_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLexperimental_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace experimental {
      namespace neuroscience {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLexperimentalcLcLneuroscience_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::experimental::neuroscience", 0 /*version*/, "neuroscience/event/neurite_bifurcation_event.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLexperimentalcLcLneuroscience_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLexperimentalcLcLneuroscience_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *bdmcLcLLog_Dictionary();
   static void bdmcLcLLog_TClassManip(TClass*);
   static void *new_bdmcLcLLog(void *p = 0);
   static void *newArray_bdmcLcLLog(Long_t size, void *p);
   static void delete_bdmcLcLLog(void *p);
   static void deleteArray_bdmcLcLLog(void *p);
   static void destruct_bdmcLcLLog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Log*)
   {
      ::bdm::Log *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Log));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Log", "core/util/log.h", 32,
                  typeid(::bdm::Log), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLLog_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Log) );
      instance.SetNew(&new_bdmcLcLLog);
      instance.SetNewArray(&newArray_bdmcLcLLog);
      instance.SetDelete(&delete_bdmcLcLLog);
      instance.SetDeleteArray(&deleteArray_bdmcLcLLog);
      instance.SetDestructor(&destruct_bdmcLcLLog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Log*)
   {
      return GenerateInitInstanceLocal((::bdm::Log*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Log*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLLog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Log*)0x0)->GetClass();
      bdmcLcLLog_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLLog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLUniqueEventIdFactory_Dictionary();
   static void bdmcLcLUniqueEventIdFactory_TClassManip(TClass*);
   static void delete_bdmcLcLUniqueEventIdFactory(void *p);
   static void deleteArray_bdmcLcLUniqueEventIdFactory(void *p);
   static void destruct_bdmcLcLUniqueEventIdFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::UniqueEventIdFactory*)
   {
      ::bdm::UniqueEventIdFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::UniqueEventIdFactory));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::UniqueEventIdFactory", "core/event/event.h", 41,
                  typeid(::bdm::UniqueEventIdFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLUniqueEventIdFactory_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::UniqueEventIdFactory) );
      instance.SetDelete(&delete_bdmcLcLUniqueEventIdFactory);
      instance.SetDeleteArray(&deleteArray_bdmcLcLUniqueEventIdFactory);
      instance.SetDestructor(&destruct_bdmcLcLUniqueEventIdFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::UniqueEventIdFactory*)
   {
      return GenerateInitInstanceLocal((::bdm::UniqueEventIdFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::UniqueEventIdFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLUniqueEventIdFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::UniqueEventIdFactory*)0x0)->GetClass();
      bdmcLcLUniqueEventIdFactory_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLUniqueEventIdFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLEvent_Dictionary();
   static void bdmcLcLEvent_TClassManip(TClass*);
   static void delete_bdmcLcLEvent(void *p);
   static void deleteArray_bdmcLcLEvent(void *p);
   static void destruct_bdmcLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Event*)
   {
      ::bdm::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Event));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Event", "core/event/event.h", 67,
                  typeid(::bdm::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Event) );
      instance.SetDelete(&delete_bdmcLcLEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLEvent);
      instance.SetDestructor(&destruct_bdmcLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Event*)
   {
      return GenerateInitInstanceLocal((::bdm::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Event*)0x0)->GetClass();
      bdmcLcLEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTFileRaii_Dictionary();
   static void bdmcLcLTFileRaii_TClassManip(TClass*);
   static void delete_bdmcLcLTFileRaii(void *p);
   static void deleteArray_bdmcLcLTFileRaii(void *p);
   static void destruct_bdmcLcLTFileRaii(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::TFileRaii*)
   {
      ::bdm::TFileRaii *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::TFileRaii));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::TFileRaii", "core/util/io.h", 50,
                  typeid(::bdm::TFileRaii), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTFileRaii_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::TFileRaii) );
      instance.SetDelete(&delete_bdmcLcLTFileRaii);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTFileRaii);
      instance.SetDestructor(&destruct_bdmcLcLTFileRaii);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::TFileRaii*)
   {
      return GenerateInitInstanceLocal((::bdm::TFileRaii*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::TFileRaii*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTFileRaii_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::TFileRaii*)0x0)->GetClass();
      bdmcLcLTFileRaii_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTFileRaii_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_Dictionary();
   static void bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_TClassManip(TClass*);
   static void *new_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p = 0);
   static void *newArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(Long_t size, void *p);
   static void delete_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p);
   static void deleteArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p);
   static void destruct_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SoUidMap<bdm::SoHandle>*)
   {
      ::bdm::SoUidMap<bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SoUidMap<bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SoUidMap<bdm::SoHandle>", "core/container/so_uid_map.h", 32,
                  typeid(::bdm::SoUidMap<bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SoUidMap<bdm::SoHandle>) );
      instance.SetNew(&new_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR);
      instance.SetNewArray(&newArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR);
      instance.SetDelete(&delete_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SoUidMap<bdm::SoHandle>*)
   {
      return GenerateInitInstanceLocal((::bdm::SoUidMap<bdm::SoHandle>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SoUidMap<bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SoUidMap<bdm::SoHandle>*)0x0)->GetClass();
      bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSoUidMaplEbdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_Dictionary();
   static void bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_TClassManip(TClass*);
   static void delete_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p);
   static void deleteArray_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p);
   static void destruct_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Functor<void,const bdm::SimObject*,double>*)
   {
      ::bdm::Functor<void,const bdm::SimObject*,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Functor<void,const bdm::SimObject*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Functor<void,const bdm::SimObject*,double>", "core/functor.h", 21,
                  typeid(::bdm::Functor<void,const bdm::SimObject*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Functor<void,const bdm::SimObject*,double>) );
      instance.SetDelete(&delete_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR);

      ::ROOT::AddClassAlternate("bdm::Functor<void,const bdm::SimObject*,double>","bdm::Functor<void, bdm::SimObject const*, double>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Functor<void,const bdm::SimObject*,double>*)
   {
      return GenerateInitInstanceLocal((::bdm::Functor<void,const bdm::SimObject*,double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Functor<void,const bdm::SimObject*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Functor<void,const bdm::SimObject*,double>*)0x0)->GetClass();
      bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_Dictionary();
   static void bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_TClassManip(TClass*);
   static void delete_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p);
   static void deleteArray_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p);
   static void destruct_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)
   {
      ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>", "core/functor.h", 21,
                  typeid(::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>) );
      instance.SetDelete(&delete_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR);

      ::ROOT::AddClassAlternate("bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>","bdm::Functor<void, bdm::SimObject*, bdm::SoHandle>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)
   {
      return GenerateInitInstanceLocal((::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)0x0)->GetClass();
      bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimObjectOperationImpl_Dictionary();
   static void bdmcLcLSimObjectOperationImpl_TClassManip(TClass*);
   static void delete_bdmcLcLSimObjectOperationImpl(void *p);
   static void deleteArray_bdmcLcLSimObjectOperationImpl(void *p);
   static void destruct_bdmcLcLSimObjectOperationImpl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimObjectOperationImpl*)
   {
      ::bdm::SimObjectOperationImpl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SimObjectOperationImpl));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimObjectOperationImpl", "core/operation/operation.h", 73,
                  typeid(::bdm::SimObjectOperationImpl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimObjectOperationImpl_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimObjectOperationImpl) );
      instance.SetDelete(&delete_bdmcLcLSimObjectOperationImpl);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimObjectOperationImpl);
      instance.SetDestructor(&destruct_bdmcLcLSimObjectOperationImpl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimObjectOperationImpl*)
   {
      return GenerateInitInstanceLocal((::bdm::SimObjectOperationImpl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimObjectOperationImpl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimObjectOperationImpl_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimObjectOperationImpl*)0x0)->GetClass();
      bdmcLcLSimObjectOperationImpl_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimObjectOperationImpl_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLStandaloneOperationImpl_Dictionary();
   static void bdmcLcLStandaloneOperationImpl_TClassManip(TClass*);
   static void delete_bdmcLcLStandaloneOperationImpl(void *p);
   static void deleteArray_bdmcLcLStandaloneOperationImpl(void *p);
   static void destruct_bdmcLcLStandaloneOperationImpl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::StandaloneOperationImpl*)
   {
      ::bdm::StandaloneOperationImpl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::StandaloneOperationImpl));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::StandaloneOperationImpl", "core/operation/operation.h", 83,
                  typeid(::bdm::StandaloneOperationImpl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLStandaloneOperationImpl_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::StandaloneOperationImpl) );
      instance.SetDelete(&delete_bdmcLcLStandaloneOperationImpl);
      instance.SetDeleteArray(&deleteArray_bdmcLcLStandaloneOperationImpl);
      instance.SetDestructor(&destruct_bdmcLcLStandaloneOperationImpl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::StandaloneOperationImpl*)
   {
      return GenerateInitInstanceLocal((::bdm::StandaloneOperationImpl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::StandaloneOperationImpl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLStandaloneOperationImpl_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::StandaloneOperationImpl*)0x0)->GetClass();
      bdmcLcLStandaloneOperationImpl_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLStandaloneOperationImpl_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSpinlock_Dictionary();
   static void bdmcLcLSpinlock_TClassManip(TClass*);
   static void *new_bdmcLcLSpinlock(void *p = 0);
   static void *newArray_bdmcLcLSpinlock(Long_t size, void *p);
   static void delete_bdmcLcLSpinlock(void *p);
   static void deleteArray_bdmcLcLSpinlock(void *p);
   static void destruct_bdmcLcLSpinlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Spinlock*)
   {
      ::bdm::Spinlock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Spinlock));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Spinlock", "core/util/spinlock.h", 22,
                  typeid(::bdm::Spinlock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSpinlock_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Spinlock) );
      instance.SetNew(&new_bdmcLcLSpinlock);
      instance.SetNewArray(&newArray_bdmcLcLSpinlock);
      instance.SetDelete(&delete_bdmcLcLSpinlock);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSpinlock);
      instance.SetDestructor(&destruct_bdmcLcLSpinlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Spinlock*)
   {
      return GenerateInitInstanceLocal((::bdm::Spinlock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Spinlock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSpinlock_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Spinlock*)0x0)->GetClass();
      bdmcLcLSpinlock_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSpinlock_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLThreadInfo_Dictionary();
   static void bdmcLcLThreadInfo_TClassManip(TClass*);
   static void delete_bdmcLcLThreadInfo(void *p);
   static void deleteArray_bdmcLcLThreadInfo(void *p);
   static void destruct_bdmcLcLThreadInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ThreadInfo*)
   {
      ::bdm::ThreadInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ThreadInfo));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ThreadInfo", "core/util/thread_info.h", 30,
                  typeid(::bdm::ThreadInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLThreadInfo_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ThreadInfo) );
      instance.SetDelete(&delete_bdmcLcLThreadInfo);
      instance.SetDeleteArray(&deleteArray_bdmcLcLThreadInfo);
      instance.SetDestructor(&destruct_bdmcLcLThreadInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ThreadInfo*)
   {
      return GenerateInitInstanceLocal((::bdm::ThreadInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ThreadInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLThreadInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ThreadInfo*)0x0)->GetClass();
      bdmcLcLThreadInfo_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLThreadInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLInPlaceExecutionContext_Dictionary();
   static void bdmcLcLInPlaceExecutionContext_TClassManip(TClass*);
   static void delete_bdmcLcLInPlaceExecutionContext(void *p);
   static void deleteArray_bdmcLcLInPlaceExecutionContext(void *p);
   static void destruct_bdmcLcLInPlaceExecutionContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::InPlaceExecutionContext*)
   {
      ::bdm::InPlaceExecutionContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::InPlaceExecutionContext));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::InPlaceExecutionContext", "core/execution_context/in_place_exec_ctxt.h", 47,
                  typeid(::bdm::InPlaceExecutionContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLInPlaceExecutionContext_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::InPlaceExecutionContext) );
      instance.SetDelete(&delete_bdmcLcLInPlaceExecutionContext);
      instance.SetDeleteArray(&deleteArray_bdmcLcLInPlaceExecutionContext);
      instance.SetDestructor(&destruct_bdmcLcLInPlaceExecutionContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::InPlaceExecutionContext*)
   {
      return GenerateInitInstanceLocal((::bdm::InPlaceExecutionContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLInPlaceExecutionContext_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext*)0x0)->GetClass();
      bdmcLcLInPlaceExecutionContext_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLInPlaceExecutionContext_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_Dictionary();
   static void bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_TClassManip(TClass*);
   static void *new_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p = 0);
   static void *newArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(Long_t size, void *p);
   static void delete_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p);
   static void deleteArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p);
   static void destruct_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)
   {
      ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::InPlaceExecutionContext::ThreadSafeSoUidMap", "core/execution_context/in_place_exec_ctxt.h", 49,
                  typeid(::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap) );
      instance.SetNew(&new_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap);
      instance.SetNewArray(&newArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap);
      instance.SetDelete(&delete_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap);
      instance.SetDeleteArray(&deleteArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap);
      instance.SetDestructor(&destruct_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)
   {
      return GenerateInitInstanceLocal((::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)0x0)->GetClass();
      bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLOpenCLState_Dictionary();
   static void bdmcLcLOpenCLState_TClassManip(TClass*);
   static void *new_bdmcLcLOpenCLState(void *p = 0);
   static void *newArray_bdmcLcLOpenCLState(Long_t size, void *p);
   static void delete_bdmcLcLOpenCLState(void *p);
   static void deleteArray_bdmcLcLOpenCLState(void *p);
   static void destruct_bdmcLcLOpenCLState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::OpenCLState*)
   {
      ::bdm::OpenCLState *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::OpenCLState));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::OpenCLState", "core/gpu/opencl_state.h", 208,
                  typeid(::bdm::OpenCLState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLOpenCLState_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::OpenCLState) );
      instance.SetNew(&new_bdmcLcLOpenCLState);
      instance.SetNewArray(&newArray_bdmcLcLOpenCLState);
      instance.SetDelete(&delete_bdmcLcLOpenCLState);
      instance.SetDeleteArray(&deleteArray_bdmcLcLOpenCLState);
      instance.SetDestructor(&destruct_bdmcLcLOpenCLState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::OpenCLState*)
   {
      return GenerateInitInstanceLocal((::bdm::OpenCLState*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::OpenCLState*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLOpenCLState_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::OpenCLState*)0x0)->GetClass();
      bdmcLcLOpenCLState_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLOpenCLState_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_Dictionary();
   static void bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_TClassManip(TClass*);
   static void *new_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p = 0);
   static void *newArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(Long_t size, void *p);
   static void delete_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p);
   static void deleteArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p);
   static void destruct_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)
   {
      ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>", "core/container/flatmap.h", 28,
                  typeid(::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>) );
      instance.SetNew(&new_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR);
      instance.SetNewArray(&newArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR);
      instance.SetDelete(&delete_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR);
      instance.SetDestructor(&destruct_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR);

      ::ROOT::AddClassAlternate("bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>","bdm::UnorderedFlatmap<unsigned long, bdm::memory_manager_detail::PoolAllocator*>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)
   {
      return GenerateInitInstanceLocal((::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)0x0)->GetClass();
      bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::SoUid>*)
   {
      ::bdm::is_so_ptr<bdm::SoUid> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::SoUid>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::SoUid>", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<bdm::SoUid>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::SoUid>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::SoUid>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::SoUid>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoUid>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoUid>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLSoUidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary();
   static void bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPintgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<unsigned int>*)
   {
      ::bdm::is_so_ptr<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<unsigned int>", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<unsigned int>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned int>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)
   {
      ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR);

      ::ROOT::AddClassAlternate("bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >","bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*, (unsigned short)2> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)
   {
      ::bdm::is_so_ptr<bdm::MathArray<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::MathArray<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::MathArray<double,3> >", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<bdm::MathArray<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::MathArray<double,3> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);

      ::ROOT::AddClassAlternate("bdm::is_so_ptr<bdm::MathArray<double,3> >","bdm::is_so_ptr<bdm::MathArray<double, 3ul> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEdoublegR_Dictionary();
   static void bdmcLcLis_so_ptrlEdoublegR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEdoublegR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEdoublegR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEdoublegR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEdoublegR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<double>*)
   {
      ::bdm::is_so_ptr<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<double>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<double>", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<double>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<double>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<double>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)
   {
      ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);

      ::ROOT::AddClassAlternate("bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >","bdm::is_so_ptr<std::vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>, std::allocator<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)
   {
      ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);

      ::ROOT::AddClassAlternate("bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >","bdm::is_so_ptr<std::unordered_map<bdm::SoUid, bdm::MathArray<double, 3ul>, std::hash<bdm::SoUid>, std::equal_to<bdm::SoUid>, std::allocator<std::pair<bdm::SoUid const, bdm::MathArray<double, 3ul> > > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEboolgR_Dictionary();
   static void bdmcLcLis_so_ptrlEboolgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEboolgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEboolgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEboolgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEboolgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bool>*)
   {
      ::bdm::is_so_ptr<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bool>", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bool>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEboolgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEboolgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bool>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bool>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)
   {
      ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >", "core/sim_object/so_pointer.h", 132,
                  typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", "core/sim_object/so_pointer.h", 132,
                  typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEintgR_Dictionary();
   static void bdmcLcLis_so_ptrlEintgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEintgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEintgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEintgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEintgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<int>*)
   {
      ::bdm::is_so_ptr<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<int>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<int>", "core/sim_object/so_pointer.h", 127,
                  typeid(::bdm::is_so_ptr<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<int>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEintgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEintgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEintgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<int>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<int>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLExtractUid_Dictionary();
   static void bdmcLcLdetailcLcLExtractUid_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLExtractUid(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLExtractUid(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLExtractUid(void *p);
   static void deleteArray_bdmcLcLdetailcLcLExtractUid(void *p);
   static void destruct_bdmcLcLdetailcLcLExtractUid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::ExtractUid*)
   {
      ::bdm::detail::ExtractUid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::ExtractUid));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::ExtractUid", "core/sim_object/so_pointer.h", 138,
                  typeid(::bdm::detail::ExtractUid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLExtractUid_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::ExtractUid) );
      instance.SetNew(&new_bdmcLcLdetailcLcLExtractUid);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLExtractUid);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLExtractUid);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLExtractUid);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLExtractUid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::ExtractUid*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::ExtractUid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::ExtractUid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLExtractUid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::ExtractUid*)0x0)->GetClass();
      bdmcLcLdetailcLcLExtractUid_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLExtractUid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLModuleParamUidGenerator_Dictionary();
   static void bdmcLcLModuleParamUidGenerator_TClassManip(TClass*);
   static void delete_bdmcLcLModuleParamUidGenerator(void *p);
   static void deleteArray_bdmcLcLModuleParamUidGenerator(void *p);
   static void destruct_bdmcLcLModuleParamUidGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ModuleParamUidGenerator*)
   {
      ::bdm::ModuleParamUidGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ModuleParamUidGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ModuleParamUidGenerator", "core/param/module_param.h", 30,
                  typeid(::bdm::ModuleParamUidGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLModuleParamUidGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ModuleParamUidGenerator) );
      instance.SetDelete(&delete_bdmcLcLModuleParamUidGenerator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLModuleParamUidGenerator);
      instance.SetDestructor(&destruct_bdmcLcLModuleParamUidGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ModuleParamUidGenerator*)
   {
      return GenerateInitInstanceLocal((::bdm::ModuleParamUidGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ModuleParamUidGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLModuleParamUidGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ModuleParamUidGenerator*)0x0)->GetClass();
      bdmcLcLModuleParamUidGenerator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLModuleParamUidGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParamcLcLVisualizeDiffusion_Dictionary();
   static void bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(TClass*);
   static void *new_bdmcLcLParamcLcLVisualizeDiffusion(void *p = 0);
   static void *newArray_bdmcLcLParamcLcLVisualizeDiffusion(Long_t size, void *p);
   static void delete_bdmcLcLParamcLcLVisualizeDiffusion(void *p);
   static void deleteArray_bdmcLcLParamcLcLVisualizeDiffusion(void *p);
   static void destruct_bdmcLcLParamcLcLVisualizeDiffusion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Param::VisualizeDiffusion*)
   {
      ::bdm::Param::VisualizeDiffusion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Param::VisualizeDiffusion));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Param::VisualizeDiffusion", "core/param/param.h", 304,
                  typeid(::bdm::Param::VisualizeDiffusion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParamcLcLVisualizeDiffusion_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Param::VisualizeDiffusion) );
      instance.SetNew(&new_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetNewArray(&newArray_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDelete(&delete_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDestructor(&destruct_bdmcLcLParamcLcLVisualizeDiffusion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Param::VisualizeDiffusion*)
   {
      return GenerateInitInstanceLocal((::bdm::Param::VisualizeDiffusion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Param::VisualizeDiffusion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParamcLcLVisualizeDiffusion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Param::VisualizeDiffusion*)0x0)->GetClass();
      bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLMath_Dictionary();
   static void bdmcLcLMath_TClassManip(TClass*);
   static void *new_bdmcLcLMath(void *p = 0);
   static void *newArray_bdmcLcLMath(Long_t size, void *p);
   static void delete_bdmcLcLMath(void *p);
   static void deleteArray_bdmcLcLMath(void *p);
   static void destruct_bdmcLcLMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Math*)
   {
      ::bdm::Math *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Math));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Math", "core/util/math.h", 30,
                  typeid(::bdm::Math), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLMath_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Math) );
      instance.SetNew(&new_bdmcLcLMath);
      instance.SetNewArray(&newArray_bdmcLcLMath);
      instance.SetDelete(&delete_bdmcLcLMath);
      instance.SetDeleteArray(&deleteArray_bdmcLcLMath);
      instance.SetDestructor(&destruct_bdmcLcLMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Math*)
   {
      return GenerateInitInstanceLocal((::bdm::Math*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Math*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLMath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Math*)0x0)->GetClass();
      bdmcLcLMath_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLMath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultForce_Dictionary();
   static void bdmcLcLDefaultForce_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultForce(void *p = 0);
   static void *newArray_bdmcLcLDefaultForce(Long_t size, void *p);
   static void delete_bdmcLcLDefaultForce(void *p);
   static void deleteArray_bdmcLcLDefaultForce(void *p);
   static void destruct_bdmcLcLDefaultForce(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultForce*)
   {
      ::bdm::DefaultForce *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultForce));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultForce", "core/default_force.h", 26,
                  typeid(::bdm::DefaultForce), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultForce_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultForce) );
      instance.SetNew(&new_bdmcLcLDefaultForce);
      instance.SetNewArray(&newArray_bdmcLcLDefaultForce);
      instance.SetDelete(&delete_bdmcLcLDefaultForce);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultForce);
      instance.SetDestructor(&destruct_bdmcLcLDefaultForce);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultForce*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultForce*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultForce*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultForce_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultForce*)0x0)->GetClass();
      bdmcLcLDefaultForce_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultForce_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCellDivisionEvent_Dictionary();
   static void bdmcLcLCellDivisionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLCellDivisionEvent(void *p);
   static void deleteArray_bdmcLcLCellDivisionEvent(void *p);
   static void destruct_bdmcLcLCellDivisionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CellDivisionEvent*)
   {
      ::bdm::CellDivisionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CellDivisionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CellDivisionEvent", "core/event/cell_division_event.h", 30,
                  typeid(::bdm::CellDivisionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCellDivisionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CellDivisionEvent) );
      instance.SetDelete(&delete_bdmcLcLCellDivisionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCellDivisionEvent);
      instance.SetDestructor(&destruct_bdmcLcLCellDivisionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CellDivisionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::CellDivisionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CellDivisionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCellDivisionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CellDivisionEvent*)0x0)->GetClass();
      bdmcLcLCellDivisionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCellDivisionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCellcLcLDisplacementFunctor_Dictionary();
   static void bdmcLcLCellcLcLDisplacementFunctor_TClassManip(TClass*);
   static void delete_bdmcLcLCellcLcLDisplacementFunctor(void *p);
   static void deleteArray_bdmcLcLCellcLcLDisplacementFunctor(void *p);
   static void destruct_bdmcLcLCellcLcLDisplacementFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Cell::DisplacementFunctor*)
   {
      ::bdm::Cell::DisplacementFunctor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Cell::DisplacementFunctor));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Cell::DisplacementFunctor", "core/sim_object/cell.h", 262,
                  typeid(::bdm::Cell::DisplacementFunctor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCellcLcLDisplacementFunctor_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Cell::DisplacementFunctor) );
      instance.SetDelete(&delete_bdmcLcLCellcLcLDisplacementFunctor);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCellcLcLDisplacementFunctor);
      instance.SetDestructor(&destruct_bdmcLcLCellcLcLDisplacementFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Cell::DisplacementFunctor*)
   {
      return GenerateInitInstanceLocal((::bdm::Cell::DisplacementFunctor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Cell::DisplacementFunctor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCellcLcLDisplacementFunctor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Cell::DisplacementFunctor*)0x0)->GetClass();
      bdmcLcLCellcLcLDisplacementFunctor_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCellcLcLDisplacementFunctor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTimingAggregator_Dictionary();
   static void bdmcLcLTimingAggregator_TClassManip(TClass*);
   static void *new_bdmcLcLTimingAggregator(void *p = 0);
   static void *newArray_bdmcLcLTimingAggregator(Long_t size, void *p);
   static void delete_bdmcLcLTimingAggregator(void *p);
   static void deleteArray_bdmcLcLTimingAggregator(void *p);
   static void destruct_bdmcLcLTimingAggregator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::TimingAggregator*)
   {
      ::bdm::TimingAggregator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::TimingAggregator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::TimingAggregator", "core/util/timing_aggregator.h", 30,
                  typeid(::bdm::TimingAggregator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTimingAggregator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::TimingAggregator) );
      instance.SetNew(&new_bdmcLcLTimingAggregator);
      instance.SetNewArray(&newArray_bdmcLcLTimingAggregator);
      instance.SetDelete(&delete_bdmcLcLTimingAggregator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTimingAggregator);
      instance.SetDestructor(&destruct_bdmcLcLTimingAggregator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::TimingAggregator*)
   {
      return GenerateInitInstanceLocal((::bdm::TimingAggregator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::TimingAggregator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTimingAggregator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::TimingAggregator*)0x0)->GetClass();
      bdmcLcLTimingAggregator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTimingAggregator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLScheduler_Dictionary();
   static void bdmcLcLScheduler_TClassManip(TClass*);
   static void *new_bdmcLcLScheduler(void *p = 0);
   static void *newArray_bdmcLcLScheduler(Long_t size, void *p);
   static void delete_bdmcLcLScheduler(void *p);
   static void deleteArray_bdmcLcLScheduler(void *p);
   static void destruct_bdmcLcLScheduler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Scheduler*)
   {
      ::bdm::Scheduler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Scheduler));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Scheduler", "core/scheduler.h", 38,
                  typeid(::bdm::Scheduler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLScheduler_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Scheduler) );
      instance.SetNew(&new_bdmcLcLScheduler);
      instance.SetNewArray(&newArray_bdmcLcLScheduler);
      instance.SetDelete(&delete_bdmcLcLScheduler);
      instance.SetDeleteArray(&deleteArray_bdmcLcLScheduler);
      instance.SetDestructor(&destruct_bdmcLcLScheduler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Scheduler*)
   {
      return GenerateInitInstanceLocal((::bdm::Scheduler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Scheduler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLScheduler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Scheduler*)0x0)->GetClass();
      bdmcLcLScheduler_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLScheduler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLEnvironmentcLcLNeighborMutexBuilder_Dictionary();
   static void bdmcLcLEnvironmentcLcLNeighborMutexBuilder_TClassManip(TClass*);
   static void delete_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p);
   static void deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p);
   static void destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Environment::NeighborMutexBuilder*)
   {
      ::bdm::Environment::NeighborMutexBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Environment::NeighborMutexBuilder));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Environment::NeighborMutexBuilder", "core/environment/environment.h", 47,
                  typeid(::bdm::Environment::NeighborMutexBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLEnvironmentcLcLNeighborMutexBuilder_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Environment::NeighborMutexBuilder) );
      instance.SetDelete(&delete_bdmcLcLEnvironmentcLcLNeighborMutexBuilder);
      instance.SetDeleteArray(&deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuilder);
      instance.SetDestructor(&destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Environment::NeighborMutexBuilder*)
   {
      return GenerateInitInstanceLocal((::bdm::Environment::NeighborMutexBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Environment::NeighborMutexBuilder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLEnvironmentcLcLNeighborMutexBuilder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Environment::NeighborMutexBuilder*)0x0)->GetClass();
      bdmcLcLEnvironmentcLcLNeighborMutexBuilder_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLEnvironmentcLcLNeighborMutexBuilder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary();
   static void bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(TClass*);
   static void *new_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p = 0);
   static void *newArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(Long_t size, void *p);
   static void delete_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);
   static void deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);
   static void destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)
   {
      ::bdm::Environment::NeighborMutexBuilder::NeighborMutex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Environment::NeighborMutexBuilder::NeighborMutex));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Environment::NeighborMutexBuilder::NeighborMutex", "core/environment/environment.h", 52,
                  typeid(::bdm::Environment::NeighborMutexBuilder::NeighborMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Environment::NeighborMutexBuilder::NeighborMutex) );
      instance.SetNew(&new_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetNewArray(&newArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetDelete(&delete_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetDeleteArray(&deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetDestructor(&destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)
   {
      return GenerateInitInstanceLocal((::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)0x0)->GetClass();
      bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLModelInitializer_Dictionary();
   static void bdmcLcLModelInitializer_TClassManip(TClass*);
   static void *new_bdmcLcLModelInitializer(void *p = 0);
   static void *newArray_bdmcLcLModelInitializer(Long_t size, void *p);
   static void delete_bdmcLcLModelInitializer(void *p);
   static void deleteArray_bdmcLcLModelInitializer(void *p);
   static void destruct_bdmcLcLModelInitializer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ModelInitializer*)
   {
      ::bdm::ModelInitializer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ModelInitializer));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ModelInitializer", "core/model_initializer.h", 30,
                  typeid(::bdm::ModelInitializer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLModelInitializer_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ModelInitializer) );
      instance.SetNew(&new_bdmcLcLModelInitializer);
      instance.SetNewArray(&newArray_bdmcLcLModelInitializer);
      instance.SetDelete(&delete_bdmcLcLModelInitializer);
      instance.SetDeleteArray(&deleteArray_bdmcLcLModelInitializer);
      instance.SetDestructor(&destruct_bdmcLcLModelInitializer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ModelInitializer*)
   {
      return GenerateInitInstanceLocal((::bdm::ModelInitializer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ModelInitializer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLModelInitializer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ModelInitializer*)0x0)->GetClass();
      bdmcLcLModelInitializer_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLModelInitializer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLVersion_Dictionary();
   static void bdmcLcLVersion_TClassManip(TClass*);
   static void *new_bdmcLcLVersion(void *p = 0);
   static void *newArray_bdmcLcLVersion(Long_t size, void *p);
   static void delete_bdmcLcLVersion(void *p);
   static void deleteArray_bdmcLcLVersion(void *p);
   static void destruct_bdmcLcLVersion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Version*)
   {
      ::bdm::Version *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Version));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Version", "version.h", 43,
                  typeid(::bdm::Version), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLVersion_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Version) );
      instance.SetNew(&new_bdmcLcLVersion);
      instance.SetNewArray(&newArray_bdmcLcLVersion);
      instance.SetDelete(&delete_bdmcLcLVersion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLVersion);
      instance.SetDestructor(&destruct_bdmcLcLVersion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Version*)
   {
      return GenerateInitInstanceLocal((::bdm::Version*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Version*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLVersion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Version*)0x0)->GetClass();
      bdmcLcLVersion_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLVersion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCommandLineOptions_Dictionary();
   static void bdmcLcLCommandLineOptions_TClassManip(TClass*);
   static void delete_bdmcLcLCommandLineOptions(void *p);
   static void deleteArray_bdmcLcLCommandLineOptions(void *p);
   static void destruct_bdmcLcLCommandLineOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CommandLineOptions*)
   {
      ::bdm::CommandLineOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CommandLineOptions));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CommandLineOptions", "core/param/command_line_options.h", 36,
                  typeid(::bdm::CommandLineOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCommandLineOptions_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CommandLineOptions) );
      instance.SetDelete(&delete_bdmcLcLCommandLineOptions);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCommandLineOptions);
      instance.SetDestructor(&destruct_bdmcLcLCommandLineOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CommandLineOptions*)
   {
      return GenerateInitInstanceLocal((::bdm::CommandLineOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CommandLineOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCommandLineOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CommandLineOptions*)0x0)->GetClass();
      bdmcLcLCommandLineOptions_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCommandLineOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTiming_Dictionary();
   static void bdmcLcLTiming_TClassManip(TClass*);
   static void *new_bdmcLcLTiming(void *p = 0);
   static void *newArray_bdmcLcLTiming(Long_t size, void *p);
   static void delete_bdmcLcLTiming(void *p);
   static void deleteArray_bdmcLcLTiming(void *p);
   static void destruct_bdmcLcLTiming(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Timing*)
   {
      ::bdm::Timing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Timing));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Timing", "core/util/timing.h", 28,
                  typeid(::bdm::Timing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTiming_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Timing) );
      instance.SetNew(&new_bdmcLcLTiming);
      instance.SetNewArray(&newArray_bdmcLcLTiming);
      instance.SetDelete(&delete_bdmcLcLTiming);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTiming);
      instance.SetDestructor(&destruct_bdmcLcLTiming);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Timing*)
   {
      return GenerateInitInstanceLocal((::bdm::Timing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Timing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTiming_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Timing*)0x0)->GetClass();
      bdmcLcLTiming_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTiming_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)
   {
      ::bdm::experimental::neuroscience::NeuriteBifurcationEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuriteBifurcationEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuriteBifurcationEvent", "neuroscience/event/neurite_bifurcation_event.h", 33,
                  typeid(::bdm::experimental::neuroscience::NeuriteBifurcationEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuriteBifurcationEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)
   {
      ::bdm::experimental::neuroscience::NeuriteBranchingEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuriteBranchingEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuriteBranchingEvent", "neuroscience/event/neurite_branching_event.h", 32,
                  typeid(::bdm::experimental::neuroscience::NeuriteBranchingEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuriteBranchingEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)
   {
      ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NewNeuriteExtensionEvent", "neuroscience/event/new_neurite_extension_event.h", 28,
                  typeid(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)
   {
      ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::SideNeuriteExtensionEvent", "neuroscience/event/side_neurite_extension_event.h", 28,
                  typeid(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)
   {
      ::bdm::experimental::neuroscience::SplitNeuriteElementEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::SplitNeuriteElementEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::SplitNeuriteElementEvent", "neuroscience/event/split_neurite_element_event.h", 29,
                  typeid(::bdm::experimental::neuroscience::SplitNeuriteElementEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::SplitNeuriteElementEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuronOrNeurite*)
   {
      ::bdm::experimental::neuroscience::NeuronOrNeurite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuronOrNeurite));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuronOrNeurite", "neuroscience/neuron_or_neurite.h", 35,
                  typeid(::bdm::experimental::neuroscience::NeuronOrNeurite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuronOrNeurite) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuronOrNeurite*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuronOrNeurite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuronOrNeurite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuronOrNeurite*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)
   {
      ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor", "neuroscience/neurite_element.h", 630,
                  typeid(::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLRootAdaptor_Dictionary();
   static void bdmcLcLRootAdaptor_TClassManip(TClass*);
   static void *new_bdmcLcLRootAdaptor(void *p = 0);
   static void *newArray_bdmcLcLRootAdaptor(Long_t size, void *p);
   static void delete_bdmcLcLRootAdaptor(void *p);
   static void deleteArray_bdmcLcLRootAdaptor(void *p);
   static void destruct_bdmcLcLRootAdaptor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::RootAdaptor*)
   {
      ::bdm::RootAdaptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::RootAdaptor));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::RootAdaptor", "core/visualization/root/adaptor.h", 41,
                  typeid(::bdm::RootAdaptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLRootAdaptor_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::RootAdaptor) );
      instance.SetNew(&new_bdmcLcLRootAdaptor);
      instance.SetNewArray(&newArray_bdmcLcLRootAdaptor);
      instance.SetDelete(&delete_bdmcLcLRootAdaptor);
      instance.SetDeleteArray(&deleteArray_bdmcLcLRootAdaptor);
      instance.SetDestructor(&destruct_bdmcLcLRootAdaptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::RootAdaptor*)
   {
      return GenerateInitInstanceLocal((::bdm::RootAdaptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::RootAdaptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLRootAdaptor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::RootAdaptor*)0x0)->GetClass();
      bdmcLcLRootAdaptor_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLRootAdaptor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLSimParam(void *p = 0);
   static void *newArray_bdmcLcLSimParam(Long_t size, void *p);
   static void delete_bdmcLcLSimParam(void *p);
   static void deleteArray_bdmcLcLSimParam(void *p);
   static void destruct_bdmcLcLSimParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimParam*)
   {
      ::bdm::SimParam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SimParam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimParam", ::bdm::SimParam::Class_Version(), "", 33,
                  typeid(::bdm::SimParam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::SimParam::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimParam) );
      instance.SetNew(&new_bdmcLcLSimParam);
      instance.SetNewArray(&newArray_bdmcLcLSimParam);
      instance.SetDelete(&delete_bdmcLcLSimParam);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimParam);
      instance.SetDestructor(&destruct_bdmcLcLSimParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimParam*)
   {
      return GenerateInitInstanceLocal((::bdm::SimParam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimParam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr SimParam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimParam::Class_Name()
{
   return "bdm::SimParam";
}

//______________________________________________________________________________
const char *SimParam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimParam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimParam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimParam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimParam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimParam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimParam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SimParam*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLLog(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Log : new ::bdm::Log;
   }
   static void *newArray_bdmcLcLLog(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Log[nElements] : new ::bdm::Log[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLLog(void *p) {
      delete ((::bdm::Log*)p);
   }
   static void deleteArray_bdmcLcLLog(void *p) {
      delete [] ((::bdm::Log*)p);
   }
   static void destruct_bdmcLcLLog(void *p) {
      typedef ::bdm::Log current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Log

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLUniqueEventIdFactory(void *p) {
      delete ((::bdm::UniqueEventIdFactory*)p);
   }
   static void deleteArray_bdmcLcLUniqueEventIdFactory(void *p) {
      delete [] ((::bdm::UniqueEventIdFactory*)p);
   }
   static void destruct_bdmcLcLUniqueEventIdFactory(void *p) {
      typedef ::bdm::UniqueEventIdFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::UniqueEventIdFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLEvent(void *p) {
      delete ((::bdm::Event*)p);
   }
   static void deleteArray_bdmcLcLEvent(void *p) {
      delete [] ((::bdm::Event*)p);
   }
   static void destruct_bdmcLcLEvent(void *p) {
      typedef ::bdm::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Event

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLTFileRaii(void *p) {
      delete ((::bdm::TFileRaii*)p);
   }
   static void deleteArray_bdmcLcLTFileRaii(void *p) {
      delete [] ((::bdm::TFileRaii*)p);
   }
   static void destruct_bdmcLcLTFileRaii(void *p) {
      typedef ::bdm::TFileRaii current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::TFileRaii

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoUidMap<bdm::SoHandle> : new ::bdm::SoUidMap<bdm::SoHandle>;
   }
   static void *newArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoUidMap<bdm::SoHandle>[nElements] : new ::bdm::SoUidMap<bdm::SoHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p) {
      delete ((::bdm::SoUidMap<bdm::SoHandle>*)p);
   }
   static void deleteArray_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p) {
      delete [] ((::bdm::SoUidMap<bdm::SoHandle>*)p);
   }
   static void destruct_bdmcLcLSoUidMaplEbdmcLcLSoHandlegR(void *p) {
      typedef ::bdm::SoUidMap<bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SoUidMap<bdm::SoHandle>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p) {
      delete ((::bdm::Functor<void,const bdm::SimObject*,double>*)p);
   }
   static void deleteArray_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p) {
      delete [] ((::bdm::Functor<void,const bdm::SimObject*,double>*)p);
   }
   static void destruct_bdmcLcLFunctorlEvoidcOconstsPbdmcLcLSimObjectmUcOdoublegR(void *p) {
      typedef ::bdm::Functor<void,const bdm::SimObject*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Functor<void,const bdm::SimObject*,double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p) {
      delete ((::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)p);
   }
   static void deleteArray_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p) {
      delete [] ((::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>*)p);
   }
   static void destruct_bdmcLcLFunctorlEvoidcObdmcLcLSimObjectmUcObdmcLcLSoHandlegR(void *p) {
      typedef ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLSimObjectOperationImpl(void *p) {
      delete ((::bdm::SimObjectOperationImpl*)p);
   }
   static void deleteArray_bdmcLcLSimObjectOperationImpl(void *p) {
      delete [] ((::bdm::SimObjectOperationImpl*)p);
   }
   static void destruct_bdmcLcLSimObjectOperationImpl(void *p) {
      typedef ::bdm::SimObjectOperationImpl current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimObjectOperationImpl

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLStandaloneOperationImpl(void *p) {
      delete ((::bdm::StandaloneOperationImpl*)p);
   }
   static void deleteArray_bdmcLcLStandaloneOperationImpl(void *p) {
      delete [] ((::bdm::StandaloneOperationImpl*)p);
   }
   static void destruct_bdmcLcLStandaloneOperationImpl(void *p) {
      typedef ::bdm::StandaloneOperationImpl current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::StandaloneOperationImpl

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSpinlock(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Spinlock : new ::bdm::Spinlock;
   }
   static void *newArray_bdmcLcLSpinlock(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Spinlock[nElements] : new ::bdm::Spinlock[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSpinlock(void *p) {
      delete ((::bdm::Spinlock*)p);
   }
   static void deleteArray_bdmcLcLSpinlock(void *p) {
      delete [] ((::bdm::Spinlock*)p);
   }
   static void destruct_bdmcLcLSpinlock(void *p) {
      typedef ::bdm::Spinlock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Spinlock

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLThreadInfo(void *p) {
      delete ((::bdm::ThreadInfo*)p);
   }
   static void deleteArray_bdmcLcLThreadInfo(void *p) {
      delete [] ((::bdm::ThreadInfo*)p);
   }
   static void destruct_bdmcLcLThreadInfo(void *p) {
      typedef ::bdm::ThreadInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ThreadInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLInPlaceExecutionContext(void *p) {
      delete ((::bdm::InPlaceExecutionContext*)p);
   }
   static void deleteArray_bdmcLcLInPlaceExecutionContext(void *p) {
      delete [] ((::bdm::InPlaceExecutionContext*)p);
   }
   static void destruct_bdmcLcLInPlaceExecutionContext(void *p) {
      typedef ::bdm::InPlaceExecutionContext current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::InPlaceExecutionContext

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap : new ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap;
   }
   static void *newArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap[nElements] : new ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p) {
      delete ((::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)p);
   }
   static void deleteArray_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p) {
      delete [] ((::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap*)p);
   }
   static void destruct_bdmcLcLInPlaceExecutionContextcLcLThreadSafeSoUidMap(void *p) {
      typedef ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::InPlaceExecutionContext::ThreadSafeSoUidMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLOpenCLState(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OpenCLState : new ::bdm::OpenCLState;
   }
   static void *newArray_bdmcLcLOpenCLState(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::OpenCLState[nElements] : new ::bdm::OpenCLState[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLOpenCLState(void *p) {
      delete ((::bdm::OpenCLState*)p);
   }
   static void deleteArray_bdmcLcLOpenCLState(void *p) {
      delete [] ((::bdm::OpenCLState*)p);
   }
   static void destruct_bdmcLcLOpenCLState(void *p) {
      typedef ::bdm::OpenCLState current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::OpenCLState

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*> : new ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>;
   }
   static void *newArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>[nElements] : new ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p) {
      delete ((::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)p);
   }
   static void deleteArray_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p) {
      delete [] ((::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>*)p);
   }
   static void destruct_bdmcLcLUnorderedFlatmaplEunsignedsPlongcObdmcLcLmemory_manager_detailcLcLPoolAllocatormUgR(void *p) {
      typedef ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoUid> : new ::bdm::is_so_ptr<bdm::SoUid>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoUid>[nElements] : new ::bdm::is_so_ptr<bdm::SoUid>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::SoUid>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::SoUid>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoUidgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::SoUid> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::SoUid>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned int> : new ::bdm::is_so_ptr<unsigned int>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned int>[nElements] : new ::bdm::is_so_ptr<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      delete ((::bdm::is_so_ptr<unsigned int>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      delete [] ((::bdm::is_so_ptr<unsigned int>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      typedef ::bdm::is_so_ptr<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> > : new ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >[nElements] : new ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLInlineVectorlEbdmcLcLBaseBiologyModulemUcO2gRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::MathArray<double,3> > : new ::bdm::is_so_ptr<bdm::MathArray<double,3> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::MathArray<double,3> >[nElements] : new ::bdm::is_so_ptr<bdm::MathArray<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::MathArray<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::MathArray<double,3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<double> : new ::bdm::is_so_ptr<double>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<double>[nElements] : new ::bdm::is_so_ptr<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      delete ((::bdm::is_so_ptr<double>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      delete [] ((::bdm::is_so_ptr<double>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      typedef ::bdm::is_so_ptr<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > : new ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >[nElements] : new ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > > : new ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >[nElements] : new ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEunordered_maplEbdmcLcLSoUidcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bool> : new ::bdm::is_so_ptr<bool>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bool>[nElements] : new ::bdm::is_so_ptr<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEboolgR(void *p) {
      delete ((::bdm::is_so_ptr<bool>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEboolgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bool>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEboolgR(void *p) {
      typedef ::bdm::is_so_ptr<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >[nElements] : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements] : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<int> : new ::bdm::is_so_ptr<int>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<int>[nElements] : new ::bdm::is_so_ptr<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEintgR(void *p) {
      delete ((::bdm::is_so_ptr<int>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEintgR(void *p) {
      delete [] ((::bdm::is_so_ptr<int>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEintgR(void *p) {
      typedef ::bdm::is_so_ptr<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLExtractUid(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ExtractUid : new ::bdm::detail::ExtractUid;
   }
   static void *newArray_bdmcLcLdetailcLcLExtractUid(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ExtractUid[nElements] : new ::bdm::detail::ExtractUid[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLExtractUid(void *p) {
      delete ((::bdm::detail::ExtractUid*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLExtractUid(void *p) {
      delete [] ((::bdm::detail::ExtractUid*)p);
   }
   static void destruct_bdmcLcLdetailcLcLExtractUid(void *p) {
      typedef ::bdm::detail::ExtractUid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::ExtractUid

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLModuleParamUidGenerator(void *p) {
      delete ((::bdm::ModuleParamUidGenerator*)p);
   }
   static void deleteArray_bdmcLcLModuleParamUidGenerator(void *p) {
      delete [] ((::bdm::ModuleParamUidGenerator*)p);
   }
   static void destruct_bdmcLcLModuleParamUidGenerator(void *p) {
      typedef ::bdm::ModuleParamUidGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ModuleParamUidGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Param::VisualizeDiffusion : new ::bdm::Param::VisualizeDiffusion;
   }
   static void *newArray_bdmcLcLParamcLcLVisualizeDiffusion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Param::VisualizeDiffusion[nElements] : new ::bdm::Param::VisualizeDiffusion[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      delete ((::bdm::Param::VisualizeDiffusion*)p);
   }
   static void deleteArray_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      delete [] ((::bdm::Param::VisualizeDiffusion*)p);
   }
   static void destruct_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      typedef ::bdm::Param::VisualizeDiffusion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Param::VisualizeDiffusion

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLMath(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Math : new ::bdm::Math;
   }
   static void *newArray_bdmcLcLMath(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Math[nElements] : new ::bdm::Math[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLMath(void *p) {
      delete ((::bdm::Math*)p);
   }
   static void deleteArray_bdmcLcLMath(void *p) {
      delete [] ((::bdm::Math*)p);
   }
   static void destruct_bdmcLcLMath(void *p) {
      typedef ::bdm::Math current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Math

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultForce(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultForce : new ::bdm::DefaultForce;
   }
   static void *newArray_bdmcLcLDefaultForce(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultForce[nElements] : new ::bdm::DefaultForce[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultForce(void *p) {
      delete ((::bdm::DefaultForce*)p);
   }
   static void deleteArray_bdmcLcLDefaultForce(void *p) {
      delete [] ((::bdm::DefaultForce*)p);
   }
   static void destruct_bdmcLcLDefaultForce(void *p) {
      typedef ::bdm::DefaultForce current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultForce

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCellDivisionEvent(void *p) {
      delete ((::bdm::CellDivisionEvent*)p);
   }
   static void deleteArray_bdmcLcLCellDivisionEvent(void *p) {
      delete [] ((::bdm::CellDivisionEvent*)p);
   }
   static void destruct_bdmcLcLCellDivisionEvent(void *p) {
      typedef ::bdm::CellDivisionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CellDivisionEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCellcLcLDisplacementFunctor(void *p) {
      delete ((::bdm::Cell::DisplacementFunctor*)p);
   }
   static void deleteArray_bdmcLcLCellcLcLDisplacementFunctor(void *p) {
      delete [] ((::bdm::Cell::DisplacementFunctor*)p);
   }
   static void destruct_bdmcLcLCellcLcLDisplacementFunctor(void *p) {
      typedef ::bdm::Cell::DisplacementFunctor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Cell::DisplacementFunctor

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLTimingAggregator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TimingAggregator : new ::bdm::TimingAggregator;
   }
   static void *newArray_bdmcLcLTimingAggregator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TimingAggregator[nElements] : new ::bdm::TimingAggregator[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLTimingAggregator(void *p) {
      delete ((::bdm::TimingAggregator*)p);
   }
   static void deleteArray_bdmcLcLTimingAggregator(void *p) {
      delete [] ((::bdm::TimingAggregator*)p);
   }
   static void destruct_bdmcLcLTimingAggregator(void *p) {
      typedef ::bdm::TimingAggregator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::TimingAggregator

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLScheduler(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler : new ::bdm::Scheduler;
   }
   static void *newArray_bdmcLcLScheduler(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler[nElements] : new ::bdm::Scheduler[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLScheduler(void *p) {
      delete ((::bdm::Scheduler*)p);
   }
   static void deleteArray_bdmcLcLScheduler(void *p) {
      delete [] ((::bdm::Scheduler*)p);
   }
   static void destruct_bdmcLcLScheduler(void *p) {
      typedef ::bdm::Scheduler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Scheduler

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p) {
      delete ((::bdm::Environment::NeighborMutexBuilder*)p);
   }
   static void deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p) {
      delete [] ((::bdm::Environment::NeighborMutexBuilder*)p);
   }
   static void destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuilder(void *p) {
      typedef ::bdm::Environment::NeighborMutexBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Environment::NeighborMutexBuilder

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Environment::NeighborMutexBuilder::NeighborMutex : new ::bdm::Environment::NeighborMutexBuilder::NeighborMutex;
   }
   static void *newArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Environment::NeighborMutexBuilder::NeighborMutex[nElements] : new ::bdm::Environment::NeighborMutexBuilder::NeighborMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      delete ((::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)p);
   }
   static void deleteArray_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      delete [] ((::bdm::Environment::NeighborMutexBuilder::NeighborMutex*)p);
   }
   static void destruct_bdmcLcLEnvironmentcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      typedef ::bdm::Environment::NeighborMutexBuilder::NeighborMutex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Environment::NeighborMutexBuilder::NeighborMutex

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLModelInitializer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ModelInitializer : new ::bdm::ModelInitializer;
   }
   static void *newArray_bdmcLcLModelInitializer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ModelInitializer[nElements] : new ::bdm::ModelInitializer[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLModelInitializer(void *p) {
      delete ((::bdm::ModelInitializer*)p);
   }
   static void deleteArray_bdmcLcLModelInitializer(void *p) {
      delete [] ((::bdm::ModelInitializer*)p);
   }
   static void destruct_bdmcLcLModelInitializer(void *p) {
      typedef ::bdm::ModelInitializer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ModelInitializer

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLVersion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Version : new ::bdm::Version;
   }
   static void *newArray_bdmcLcLVersion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Version[nElements] : new ::bdm::Version[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLVersion(void *p) {
      delete ((::bdm::Version*)p);
   }
   static void deleteArray_bdmcLcLVersion(void *p) {
      delete [] ((::bdm::Version*)p);
   }
   static void destruct_bdmcLcLVersion(void *p) {
      typedef ::bdm::Version current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Version

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCommandLineOptions(void *p) {
      delete ((::bdm::CommandLineOptions*)p);
   }
   static void deleteArray_bdmcLcLCommandLineOptions(void *p) {
      delete [] ((::bdm::CommandLineOptions*)p);
   }
   static void destruct_bdmcLcLCommandLineOptions(void *p) {
      typedef ::bdm::CommandLineOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CommandLineOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLTiming(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Timing : new ::bdm::Timing;
   }
   static void *newArray_bdmcLcLTiming(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Timing[nElements] : new ::bdm::Timing[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLTiming(void *p) {
      delete ((::bdm::Timing*)p);
   }
   static void deleteArray_bdmcLcLTiming(void *p) {
      delete [] ((::bdm::Timing*)p);
   }
   static void destruct_bdmcLcLTiming(void *p) {
      typedef ::bdm::Timing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Timing

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuriteBifurcationEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuriteBifurcationEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuriteBranchingEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuriteBranchingEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::SplitNeuriteElementEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::SplitNeuriteElementEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuronOrNeurite*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuronOrNeurite*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuronOrNeurite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuronOrNeurite

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementcLcLDisplacementFunctor(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuriteElement::DisplacementFunctor

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLRootAdaptor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::RootAdaptor : new ::bdm::RootAdaptor;
   }
   static void *newArray_bdmcLcLRootAdaptor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::RootAdaptor[nElements] : new ::bdm::RootAdaptor[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLRootAdaptor(void *p) {
      delete ((::bdm::RootAdaptor*)p);
   }
   static void deleteArray_bdmcLcLRootAdaptor(void *p) {
      delete [] ((::bdm::RootAdaptor*)p);
   }
   static void destruct_bdmcLcLRootAdaptor(void *p) {
      typedef ::bdm::RootAdaptor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::RootAdaptor

namespace bdm {
//______________________________________________________________________________
void SimParam::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SimParam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SimParam::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SimParam::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimParam(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimParam : new ::bdm::SimParam;
   }
   static void *newArray_bdmcLcLSimParam(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimParam[nElements] : new ::bdm::SimParam[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimParam(void *p) {
      delete ((::bdm::SimParam*)p);
   }
   static void deleteArray_bdmcLcLSimParam(void *p) {
      delete [] ((::bdm::SimParam*)p);
   }
   static void destruct_bdmcLcLSimParam(void *p) {
      typedef ::bdm::SimParam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimParam

namespace ROOT {
   static TClass *vectorlEbdmcLcLSpinlockmUgR_Dictionary();
   static void vectorlEbdmcLcLSpinlockmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSpinlockmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSpinlockmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSpinlockmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSpinlockmUgR(void *p);
   static void destruct_vectorlEbdmcLcLSpinlockmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Spinlock*>*)
   {
      vector<bdm::Spinlock*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Spinlock*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Spinlock*>", -2, "vector", 386,
                  typeid(vector<bdm::Spinlock*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSpinlockmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Spinlock*>) );
      instance.SetNew(&new_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSpinlockmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSpinlockmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Spinlock*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::Spinlock*>","std::vector<bdm::Spinlock*, std::allocator<bdm::Spinlock*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Spinlock*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSpinlockmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Spinlock*>*)0x0)->GetClass();
      vectorlEbdmcLcLSpinlockmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSpinlockmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Spinlock*> : new vector<bdm::Spinlock*>;
   }
   static void *newArray_vectorlEbdmcLcLSpinlockmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Spinlock*>[nElements] : new vector<bdm::Spinlock*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      delete ((vector<bdm::Spinlock*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      delete [] ((vector<bdm::Spinlock*>*)p);
   }
   static void destruct_vectorlEbdmcLcLSpinlockmUgR(void *p) {
      typedef vector<bdm::Spinlock*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Spinlock*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_Dictionary();
   static void vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p);
   static void destruct_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>*)
   {
      vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>", -2, "vector", 386,
                  typeid(vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>) );
      instance.SetNew(&new_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>","std::vector<bdm::SoUidMap<std::pair<bdm::SimObject*, unsigned long> >*, std::allocator<bdm::SoUidMap<std::pair<bdm::SimObject*, unsigned long> >*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>*)0x0)->GetClass();
      vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*> : new vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>;
   }
   static void *newArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>[nElements] : new vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p) {
      delete ((vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p) {
      delete [] ((vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>*)p);
   }
   static void destruct_vectorlEbdmcLcLSoUidMaplEpairlEbdmcLcLSimObjectmUcOunsignedsPlonggRsPgRmUgR(void *p) {
      typedef vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoUidMap<pair<bdm::SimObject*,unsigned long> >*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoUidgR_Dictionary();
   static void vectorlEbdmcLcLSoUidgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoUidgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoUidgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoUidgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoUidgR(void *p);
   static void destruct_vectorlEbdmcLcLSoUidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoUid>*)
   {
      vector<bdm::SoUid> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoUid>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoUid>", -2, "vector", 386,
                  typeid(vector<bdm::SoUid>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoUidgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoUid>) );
      instance.SetNew(&new_vectorlEbdmcLcLSoUidgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoUidgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoUidgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoUidgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoUidgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoUid> >()));

      ::ROOT::AddClassAlternate("vector<bdm::SoUid>","std::vector<bdm::SoUid, std::allocator<bdm::SoUid> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoUid>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoUidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoUid>*)0x0)->GetClass();
      vectorlEbdmcLcLSoUidgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoUidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoUidgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoUid> : new vector<bdm::SoUid>;
   }
   static void *newArray_vectorlEbdmcLcLSoUidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoUid>[nElements] : new vector<bdm::SoUid>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoUidgR(void *p) {
      delete ((vector<bdm::SoUid>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoUidgR(void *p) {
      delete [] ((vector<bdm::SoUid>*)p);
   }
   static void destruct_vectorlEbdmcLcLSoUidgR(void *p) {
      typedef vector<bdm::SoUid> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoUid>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary();
   static void vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", -2, "vector", 386,
                  typeid(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >) );
      instance.SetNew(&new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >()));

      ::ROOT::AddClassAlternate("vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >","std::vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>, std::allocator<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0)->GetClass();
      vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > : new vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >;
   }
   static void *newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements] : new vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete ((vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete [] ((vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      typedef vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary();
   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p);
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoHandle>*)
   {
      vector<bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoHandle>", -2, "vector", 386,
                  typeid(vector<bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoHandle>) );
      instance.SetNew(&new_vectorlEbdmcLcLSoHandlegR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoHandlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoHandle> >()));

      ::ROOT::AddClassAlternate("vector<bdm::SoHandle>","std::vector<bdm::SoHandle, std::allocator<bdm::SoHandle> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0)->GetClass();
      vectorlEbdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle> : new vector<bdm::SoHandle>;
   }
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle>[nElements] : new vector<bdm::SoHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete ((vector<bdm::SoHandle>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete [] ((vector<bdm::SoHandle>*)p);
   }
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p) {
      typedef vector<bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoHandle>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSimObjectmUgR_Dictionary();
   static void vectorlEbdmcLcLSimObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSimObjectmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSimObjectmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSimObjectmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSimObjectmUgR(void *p);
   static void destruct_vectorlEbdmcLcLSimObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SimObject*>*)
   {
      vector<bdm::SimObject*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SimObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SimObject*>", -2, "vector", 386,
                  typeid(vector<bdm::SimObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSimObjectmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SimObject*>) );
      instance.SetNew(&new_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSimObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SimObject*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::SimObject*>","std::vector<bdm::SimObject*, std::allocator<bdm::SimObject*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SimObject*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSimObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SimObject*>*)0x0)->GetClass();
      vectorlEbdmcLcLSimObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSimObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SimObject*> : new vector<bdm::SimObject*>;
   }
   static void *newArray_vectorlEbdmcLcLSimObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SimObject*>[nElements] : new vector<bdm::SimObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      delete ((vector<bdm::SimObject*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      delete [] ((vector<bdm::SimObject*>*)p);
   }
   static void destruct_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      typedef vector<bdm::SimObject*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SimObject*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary();
   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLRandommUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLRandommUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p);
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Random*>*)
   {
      vector<bdm::Random*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Random*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Random*>", -2, "vector", 386,
                  typeid(vector<bdm::Random*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLRandommUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Random*>) );
      instance.SetNew(&new_vectorlEbdmcLcLRandommUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLRandommUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLRandommUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Random*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::Random*>","std::vector<bdm::Random*, std::allocator<bdm::Random*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0)->GetClass();
      vectorlEbdmcLcLRandommUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLRandommUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*> : new vector<bdm::Random*>;
   }
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*>[nElements] : new vector<bdm::Random*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLRandommUgR(void *p) {
      delete ((vector<bdm::Random*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p) {
      delete [] ((vector<bdm::Random*>*)p);
   }
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p) {
      typedef vector<bdm::Random*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Random*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary();
   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Param::VisualizeDiffusion>*)
   {
      vector<bdm::Param::VisualizeDiffusion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Param::VisualizeDiffusion>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Param::VisualizeDiffusion>", -2, "vector", 386,
                  typeid(vector<bdm::Param::VisualizeDiffusion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Param::VisualizeDiffusion>) );
      instance.SetNew(&new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDelete(&delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Param::VisualizeDiffusion> >()));

      ::ROOT::AddClassAlternate("vector<bdm::Param::VisualizeDiffusion>","std::vector<bdm::Param::VisualizeDiffusion, std::allocator<bdm::Param::VisualizeDiffusion> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0)->GetClass();
      vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion> : new vector<bdm::Param::VisualizeDiffusion>;
   }
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion>[nElements] : new vector<bdm::Param::VisualizeDiffusion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete [] ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      typedef vector<bdm::Param::VisualizeDiffusion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Param::VisualizeDiffusion>

namespace ROOT {
   static TClass *vectorlEbdmcLcLOperationImplmUgR_Dictionary();
   static void vectorlEbdmcLcLOperationImplmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLOperationImplmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLOperationImplmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLOperationImplmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLOperationImplmUgR(void *p);
   static void destruct_vectorlEbdmcLcLOperationImplmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::OperationImpl*>*)
   {
      vector<bdm::OperationImpl*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::OperationImpl*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::OperationImpl*>", -2, "vector", 386,
                  typeid(vector<bdm::OperationImpl*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLOperationImplmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::OperationImpl*>) );
      instance.SetNew(&new_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLOperationImplmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLOperationImplmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::OperationImpl*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::OperationImpl*>","std::vector<bdm::OperationImpl*, std::allocator<bdm::OperationImpl*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::OperationImpl*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLOperationImplmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::OperationImpl*>*)0x0)->GetClass();
      vectorlEbdmcLcLOperationImplmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLOperationImplmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::OperationImpl*> : new vector<bdm::OperationImpl*>;
   }
   static void *newArray_vectorlEbdmcLcLOperationImplmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::OperationImpl*>[nElements] : new vector<bdm::OperationImpl*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      delete ((vector<bdm::OperationImpl*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      delete [] ((vector<bdm::OperationImpl*>*)p);
   }
   static void destruct_vectorlEbdmcLcLOperationImplmUgR(void *p) {
      typedef vector<bdm::OperationImpl*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::OperationImpl*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLOperationmUgR_Dictionary();
   static void vectorlEbdmcLcLOperationmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLOperationmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLOperationmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLOperationmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLOperationmUgR(void *p);
   static void destruct_vectorlEbdmcLcLOperationmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Operation*>*)
   {
      vector<bdm::Operation*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Operation*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Operation*>", -2, "vector", 386,
                  typeid(vector<bdm::Operation*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLOperationmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Operation*>) );
      instance.SetNew(&new_vectorlEbdmcLcLOperationmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLOperationmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLOperationmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLOperationmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLOperationmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Operation*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::Operation*>","std::vector<bdm::Operation*, std::allocator<bdm::Operation*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Operation*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLOperationmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Operation*>*)0x0)->GetClass();
      vectorlEbdmcLcLOperationmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLOperationmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLOperationmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Operation*> : new vector<bdm::Operation*>;
   }
   static void *newArray_vectorlEbdmcLcLOperationmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Operation*>[nElements] : new vector<bdm::Operation*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLOperationmUgR(void *p) {
      delete ((vector<bdm::Operation*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLOperationmUgR(void *p) {
      delete [] ((vector<bdm::Operation*>*)p);
   }
   static void destruct_vectorlEbdmcLcLOperationmUgR(void *p) {
      typedef vector<bdm::Operation*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Operation*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary();
   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::MathArray<double,3> >*)
   {
      vector<bdm::MathArray<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::MathArray<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::MathArray<double,3> >", -2, "vector", 386,
                  typeid(vector<bdm::MathArray<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::MathArray<double,3> >) );
      instance.SetNew(&new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::MathArray<double,3> > >()));

      ::ROOT::AddClassAlternate("vector<bdm::MathArray<double,3> >","std::vector<bdm::MathArray<double, 3ul>, std::allocator<bdm::MathArray<double, 3ul> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::MathArray<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::MathArray<double,3> >*)0x0)->GetClass();
      vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::MathArray<double,3> > : new vector<bdm::MathArray<double,3> >;
   }
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::MathArray<double,3> >[nElements] : new vector<bdm::MathArray<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete ((vector<bdm::MathArray<double,3> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete [] ((vector<bdm::MathArray<double,3> >*)p);
   }
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      typedef vector<bdm::MathArray<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::MathArray<double,3> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary();
   static void vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);
   static void destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::InPlaceExecutionContext*>*)
   {
      vector<bdm::InPlaceExecutionContext*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::InPlaceExecutionContext*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::InPlaceExecutionContext*>", -2, "vector", 386,
                  typeid(vector<bdm::InPlaceExecutionContext*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::InPlaceExecutionContext*>) );
      instance.SetNew(&new_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::InPlaceExecutionContext*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::InPlaceExecutionContext*>","std::vector<bdm::InPlaceExecutionContext*, std::allocator<bdm::InPlaceExecutionContext*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::InPlaceExecutionContext*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::InPlaceExecutionContext*>*)0x0)->GetClass();
      vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InPlaceExecutionContext*> : new vector<bdm::InPlaceExecutionContext*>;
   }
   static void *newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InPlaceExecutionContext*>[nElements] : new vector<bdm::InPlaceExecutionContext*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      delete ((vector<bdm::InPlaceExecutionContext*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      delete [] ((vector<bdm::InPlaceExecutionContext*>*)p);
   }
   static void destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      typedef vector<bdm::InPlaceExecutionContext*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::InPlaceExecutionContext*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary();
   static void vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLBaseBiologyModulemUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);
   static void destruct_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::BaseBiologyModule*>*)
   {
      vector<bdm::BaseBiologyModule*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::BaseBiologyModule*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::BaseBiologyModule*>", -2, "vector", 386,
                  typeid(vector<bdm::BaseBiologyModule*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::BaseBiologyModule*>) );
      instance.SetNew(&new_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::BaseBiologyModule*> >()));

      ::ROOT::AddClassAlternate("vector<bdm::BaseBiologyModule*>","std::vector<bdm::BaseBiologyModule*, std::allocator<bdm::BaseBiologyModule*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::BaseBiologyModule*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::BaseBiologyModule*>*)0x0)->GetClass();
      vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::BaseBiologyModule*> : new vector<bdm::BaseBiologyModule*>;
   }
   static void *newArray_vectorlEbdmcLcLBaseBiologyModulemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::BaseBiologyModule*>[nElements] : new vector<bdm::BaseBiologyModule*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      delete ((vector<bdm::BaseBiologyModule*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      delete [] ((vector<bdm::BaseBiologyModule*>*)p);
   }
   static void destruct_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      typedef vector<bdm::BaseBiologyModule*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::BaseBiologyModule*>

namespace ROOT {
   static TClass *vectorlEarraylEdoublecO8gRsPgR_Dictionary();
   static void vectorlEarraylEdoublecO8gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEarraylEdoublecO8gRsPgR(void *p = 0);
   static void *newArray_vectorlEarraylEdoublecO8gRsPgR(Long_t size, void *p);
   static void delete_vectorlEarraylEdoublecO8gRsPgR(void *p);
   static void deleteArray_vectorlEarraylEdoublecO8gRsPgR(void *p);
   static void destruct_vectorlEarraylEdoublecO8gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<array<double,8> >*)
   {
      vector<array<double,8> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<array<double,8> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<array<double,8> >", -2, "vector", 386,
                  typeid(vector<array<double,8> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEarraylEdoublecO8gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<array<double,8> >) );
      instance.SetNew(&new_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetNewArray(&newArray_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDelete(&delete_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEarraylEdoublecO8gRsPgR);
      instance.SetDestructor(&destruct_vectorlEarraylEdoublecO8gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<array<double,8> > >()));

      ::ROOT::AddClassAlternate("vector<array<double,8> >","std::vector<std::array<double, 8ul>, std::allocator<std::array<double, 8ul> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<array<double,8> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEarraylEdoublecO8gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<array<double,8> >*)0x0)->GetClass();
      vectorlEarraylEdoublecO8gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEarraylEdoublecO8gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<array<double,8> > : new vector<array<double,8> >;
   }
   static void *newArray_vectorlEarraylEdoublecO8gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<array<double,8> >[nElements] : new vector<array<double,8> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      delete ((vector<array<double,8> >*)p);
   }
   static void deleteArray_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      delete [] ((vector<array<double,8> >*)p);
   }
   static void destruct_vectorlEarraylEdoublecO8gRsPgR(void *p) {
      typedef vector<array<double,8> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<array<double,8> >

namespace {
  void TriggerDictionaryInitialization_parameters_dict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/usr/include",
"/home/bdm/biodynamo/build/third_party/root/include",
"/home/bdm/demo/parameters/build/omp",
"/home/bdm/biodynamo/build/include",
"/home/bdm/demo/parameters/src",
"/home/bdm/biodynamo/build/third_party/root/include/",
"/home/bdm/demo/parameters/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "parameters_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/log.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Log;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  UniqueEventIdFactory;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Event;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  OperationImpl;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/sim_object/sim_object.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SimObject;}
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace bdm{template <typename TValue> class __attribute__((annotate("$clingAutoload$core/container/so_uid_map.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoUidMap;
}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/execution_context/in_place_exec_ctxt.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InPlaceExecutionContext;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Operation;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/sim_object/so_uid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoUid;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/spinlock.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Spinlock;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/util/random.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Random;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/biology_module/biology_module.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  BaseBiologyModule;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/sim_object/so_handle.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoHandle;}
namespace bdm{template <class T, std::size_t N> class __attribute__((annotate("$clingAutoload$core/container/math_array.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  MathArray;
}
namespace bdm{namespace experimental{namespace neuroscience{class __attribute__((annotate("$clingAutoload$neuroscience/neurite_element.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteElement;}}}
namespace bdm{template <typename TSimObject> class __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoPointer;
}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/io.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  TFileRaii;}
namespace bdm{template <typename TReturn, typename ...TParameter> struct __attribute__((annotate("$clingAutoload$core/functor.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Functor;
}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SimObjectOperationImpl;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  StandaloneOperationImpl;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/thread_info.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ThreadInfo;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/gpu/opencl_state.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  OpenCLState;}
namespace bdm{namespace memory_manager_detail{class __attribute__((annotate("$clingAutoload$core/memory/memory_manager.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  PoolAllocator;}}
namespace bdm{template <typename TKey, typename TValue> class __attribute__((annotate("$clingAutoload$core/container/flatmap.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  UnorderedFlatmap;
}
namespace bdm{template <typename T> struct __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  is_so_ptr;
}
namespace bdm{template <typename T, uint16_t N> class __attribute__((annotate("$clingAutoload$core/container/inline_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InlineVector;
}
namespace std{template <typename _Tp> struct __attribute__((annotate("$clingAutoload$experimental/string_view")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  hash;
}
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  equal_to;
}
namespace bdm{namespace experimental{namespace neuroscience{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/neuron_or_neurite.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuronOrNeurite;}}}
namespace bdm{namespace detail{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ExtractUid;}}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/param/module_param.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ModuleParamUidGenerator;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/math.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Math;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/default_force.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  DefaultForce;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/cell_division_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CellDivisionEvent;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/timing_aggregator.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  TimingAggregator;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/scheduler.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Scheduler;}
namespace std{template <typename _Tp, std::size_t _Nm> struct __attribute__((annotate("$clingAutoload$array")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  array;
}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/model_initializer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ModelInitializer;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$version.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Version;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/param/command_line_options.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CommandLineOptions;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/timing.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Timing;}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/neurite_bifurcation_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteBifurcationEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/neurite_branching_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteBranchingEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/new_neurite_extension_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NewNeuriteExtensionEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/side_neurite_extension_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SideNeuriteExtensionEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/split_neurite_element_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SplitNeuriteElementEvent;}}}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/visualization/root/adaptor.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  RootAdaptor;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) SimParam;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "parameters_dict dictionary payload"

#ifndef BDMSYS
  #define BDMSYS /home/bdm/biodynamo/build
#endif
#ifndef USE_NUMA
  #define USE_NUMA 1
#endif
#ifndef USE_DICT
  #define USE_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------
#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "biodynamo.h"

namespace bdm {

// Parameters specific for this simulation
struct SimParam : public ModuleParam {
  BDM_MODULE_PARAM_HEADER(SimParam, 1);

  double foo = 3.14;
  int bar = -42;
};

inline int Simulate(int argc, const char** argv) {
  // Before we create a simulation we have to tell BioDynaMo about
  // the new parameters.
  Param::RegisterModuleParam(new SimParam());

  Simulation simulation(argc, argv);

  // get a pointer to the param object
  auto* param = simulation.GetParam();
  // get a pointer to an instance of SimParam
  auto* sparam = param->GetModuleParam<SimParam>();

  std::cout << "Value of simulation time step " << param->simulation_time_step_
            << std::endl;
  std::cout << "Value of foo                  " << sparam->foo << std::endl;
  std::cout << "Value of bar                  " << sparam->bar << std::endl;

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // PARAMETERS_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"bdm::Cell", payloadCode, "@",
"bdm::CellDivisionEvent", payloadCode, "@",
"bdm::CommandLineOptions", payloadCode, "@",
"bdm::DefaultForce", payloadCode, "@",
"bdm::Environment", payloadCode, "@",
"bdm::Event", payloadCode, "@",
"bdm::Functor<void,bdm::SimObject*,bdm::SoHandle>", payloadCode, "@",
"bdm::Functor<void,const bdm::SimObject*,double>", payloadCode, "@",
"bdm::InPlaceExecutionContext", payloadCode, "@",
"bdm::Log", payloadCode, "@",
"bdm::Math", payloadCode, "@",
"bdm::ModelInitializer", payloadCode, "@",
"bdm::ModuleParamUidGenerator", payloadCode, "@",
"bdm::OpenCLState", payloadCode, "@",
"bdm::Param", payloadCode, "@",
"bdm::Param::NumericalODESolver", payloadCode, "@",
"bdm::Param::ThreadSafetyMechanism", payloadCode, "@",
"bdm::RootAdaptor", payloadCode, "@",
"bdm::Scheduler", payloadCode, "@",
"bdm::SimObjectOperationImpl", payloadCode, "@",
"bdm::SimParam", payloadCode, "@",
"bdm::SoUidMap<bdm::SoHandle>", payloadCode, "@",
"bdm::Spinlock", payloadCode, "@",
"bdm::StandaloneOperationImpl", payloadCode, "@",
"bdm::TFileRaii", payloadCode, "@",
"bdm::ThreadInfo", payloadCode, "@",
"bdm::Timing", payloadCode, "@",
"bdm::TimingAggregator", payloadCode, "@",
"bdm::UniqueEventIdFactory", payloadCode, "@",
"bdm::UnorderedFlatmap<unsigned long,bdm::memory_manager_detail::PoolAllocator*>", payloadCode, "@",
"bdm::Version", payloadCode, "@",
"bdm::detail::ExtractUid", payloadCode, "@",
"bdm::experimental::neuroscience::NeuriteBifurcationEvent", payloadCode, "@",
"bdm::experimental::neuroscience::NeuriteBranchingEvent", payloadCode, "@",
"bdm::experimental::neuroscience::NeuriteElement", payloadCode, "@",
"bdm::experimental::neuroscience::NeuronOrNeurite", payloadCode, "@",
"bdm::experimental::neuroscience::NewNeuriteExtensionEvent", payloadCode, "@",
"bdm::experimental::neuroscience::SideNeuriteExtensionEvent", payloadCode, "@",
"bdm::experimental::neuroscience::SplitNeuriteElementEvent", payloadCode, "@",
"bdm::is_so_ptr<bdm::InlineVector<bdm::BaseBiologyModule*,2> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::MathArray<double,3> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::SoUid>", payloadCode, "@",
"bdm::is_so_ptr<bool>", payloadCode, "@",
"bdm::is_so_ptr<double>", payloadCode, "@",
"bdm::is_so_ptr<int>", payloadCode, "@",
"bdm::is_so_ptr<unordered_map<bdm::SoUid,bdm::MathArray<double,3> > >", payloadCode, "@",
"bdm::is_so_ptr<unsigned int>", payloadCode, "@",
"bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("parameters_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_parameters_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_parameters_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_parameters_dict() {
  TriggerDictionaryInitialization_parameters_dict_Impl();
}
