bool VitalIsOk(float value, float minVal, float maxVal){
  bool retValue = true; 
  if((value < minVal) || (value > maxVal) ) {
    retValue =false; 
  }
  return retValue;
}

bool isbpmOk (float bpm)
{
  return (VitalIsOk(bpm, 70, 150));
}

bool isSpo2Ok (float spo2)
{
  return (VitalIsOk(spo2, 80, 100));
}

bool isRespRate (float respRate)
{
  return (VitalIsOk(respRate, 30, 60));
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
   
  return (isbpmOk(bpm) && isSpo2Ok(spo2) && isRespRate(respRate));
}


