
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/vpc/model/UpdateSubnetRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  UpdateSubnetRequest
    : public ModelBase
{
public:
    UpdateSubnetRequest();
    virtual ~UpdateSubnetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSubnetRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSubnetRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSubnetRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    UpdateSubnetRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSubnetRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSubnetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequest_H_