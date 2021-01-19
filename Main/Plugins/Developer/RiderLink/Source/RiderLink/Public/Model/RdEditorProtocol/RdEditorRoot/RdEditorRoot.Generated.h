//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.07.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef RDEDITORROOT_GENERATED_H
#define RDEDITORROOT_GENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "../instantiationsRdEditorProtocol.h"

#include "UE4TypesMarshallers.h"

#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )

/// <summary>
/// <p>Generated from: RdEditorModel.kt:10</p>
/// </summary>
namespace JetBrains {
namespace EditorPlugin {

class RIDERLINK_API RdEditorRoot : public rd::RdExtBase {

public:
    struct RdEditorRootSerializersOwner final : public rd::ISerializersOwner {
        void registerSerializersCore(rd::Serializers const& serializers) const override;
    };
    
    static const RdEditorRootSerializersOwner serializersOwner;
    
    

public:
    void connect(rd::Lifetime lifetime, rd::IProtocol const * protocol);
    

private:
    // custom serializers

public:
    // constants

protected:
    // fields

private:
    // initializer
    void initialize();

public:
    
    // default ctors and dtors
    
    RdEditorRoot();
    
    RdEditorRoot(RdEditorRoot &&) = delete;
    
    RdEditorRoot& operator=(RdEditorRoot &&) = delete;
    
    virtual ~RdEditorRoot() = default;
    
    // reader
    
    // writer
    
    // virtual init
    void init(rd::Lifetime lifetime) const override;
    
    // identify
    void identify(const rd::Identities &identities, rd::RdId const &id) const override;
    
    // getters
    
    // intern

private:
    // equals trait

public:
    // equality operators
    friend bool operator==(const RdEditorRoot &lhs, const RdEditorRoot &rhs);
    friend bool operator!=(const RdEditorRoot &lhs, const RdEditorRoot &rhs);
    // hash code trait
    // type name trait
    // static type name trait

private:
    // polymorphic to string
    std::string toString() const override;

public:
    // external to string
    friend std::string to_string(const RdEditorRoot & value);
};

}
}

#pragma warning( pop )



#endif // RDEDITORROOT_GENERATED_H
