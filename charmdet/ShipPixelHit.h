#ifndef PIXELHIT_H
#define PIXELHIT_H

#include "ShipHit.h"
#include "ShipOnlineDataFormat.h"
#include "unordered_map"
#include "PixelModules.h"

struct HitID {
   int32_t partitionID;
   int32_t frontEndID;
   int32_t moduleID;
   int32_t row;
   int32_t column;
};

class ShipPixelHit : public ShipHit {
public:
   /** Default constructor **/
   ShipPixelHit() = default;
   ~ShipPixelHit() = default;

   ShipPixelHit(Int_t detID, Float_t fdigi);
   HitID GetPixel();
   int32_t GetDetectorID();
<<<<<<< HEAD
   static std::shared_ptr <std::unordered_map<int, TVector3>> MakePositionMap();
=======
   static std::unordered_map<int, TVector3>* MakePositionMap();
>>>>>>> origin/master
   int32_t GetModule();
   void GetPixelXYZ(TVector3 &pixel, int detID);
   void Print();
   int32_t GetTimeOverThreshold() const {return fdigi*25 ; }
private:
<<<<<<< HEAD
   static std::shared_ptr <std::unordered_map<int, TVector3>> PixelPositionMap; //!
   static int MapInitialized; //!
=======
   static std::unordered_map<int, TVector3>* PixelPositionMap; //!
>>>>>>> origin/master
   /** Copy constructor **/
   ShipPixelHit(const ShipPixelHit &other);
   ShipPixelHit operator=(const ShipPixelHit &other);

   int32_t detID;
   uint16_t tot;

<<<<<<< HEAD
   ClassDef(ShipPixelHit, 1);
=======
   ClassDef(ShipPixelHit, 2);
>>>>>>> origin/master
};

#endif
