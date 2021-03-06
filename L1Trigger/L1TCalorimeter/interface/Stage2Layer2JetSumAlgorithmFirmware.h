///
/// Description: Firmware headers
///
/// Implementation:
///    Concrete firmware implementations
///
/// \author: Jim Brooke - University of Bristol
///

//
//

#ifndef Stage2Layer2JetSumAlgorithmFirmware_H
#define Stage2Layer2JetSumAlgorithmFirmware_H

#include "L1Trigger/L1TCalorimeter/interface/Stage2Layer2JetSumAlgorithm.h"
#include "CondFormats/L1TObjects/interface/CaloParams.h"

namespace l1t {

  // Imp1 is for v1 and v2
  class Stage2Layer2JetSumAlgorithmFirmwareImp1 : public Stage2Layer2JetSumAlgorithm {
  public:
    Stage2Layer2JetSumAlgorithmFirmwareImp1(CaloParams* params);
    virtual ~Stage2Layer2JetSumAlgorithmFirmwareImp1();
    virtual void processEvent(const std::vector<l1t::Jet> & jets,
			      std::vector<l1t::EtSum> & clusters);
  private:
    CaloParams* params_;
    int32_t etSumEtThresholdHwEt_;
    int32_t etSumEtThresholdHwMet_; 
    int32_t etSumEtaMinEt_;
    int32_t etSumEtaMaxEt_;
    int32_t etSumEtaMinMet_;
    int32_t etSumEtaMaxMet_;

  };

}

#endif
