
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/Vpc.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  CreateVpcResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVpcResponse();
    virtual ~CreateVpcResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcResponse members

    /// <summary>
    /// 
    /// </summary>

    Vpc getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const Vpc& value);


protected:
    Vpc vpc_;
    bool vpcIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_