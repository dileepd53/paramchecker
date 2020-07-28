

bool isbpmOk (float bpm)
{
  if(bpm < 70 || bpm > 150){
    return false;
  }
  return true;
}

bool isSpo2Ok (float spo2)
{
  if(spo2 < 80) {
    return false;
  }
  return true;
}

bool isRespRate (float respRate)
{
  if(respRate < 30 || respRate > 60){
    return false;
  }
  return true;
  
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpmValue = isbpmOk(bpm);
  
  bool spo2Value = isSpo2Ok(spo2);
  
  bool respRateValue = isRespRate(respRate);
  
  return (bpmValue && spo2Value && respRateValue);
}
