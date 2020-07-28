bool VitalIsOk(float vitalVal, float minVal, float maxVal) {

  bool boolVal = true;
  if ((vitalVal < minVal) || (vitalVal > maxVal)) {
    boolVal = false;
  }
  return boolVal;
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


