@ 0xdbb9ad1f14bf0b36;

enum MessageType {
  unknown @ 0;
  request @ 1;
  response @ 2;
}

enum MessageID {
  unknown @ 0;
  read @ 1;
  write @ 2;
  shot100m @ 3;
  shot300m @ 4;
}

enum Command {
  unknown @ 0;
  start @ 1;
  stop @ 2;
  config @ 3;
  data @ 4;
}

enum MessageErrorCode {
  unknown @ 0;
  readError @ 1;
  writeError @ 2;
}
struct RegisterInfo {
  msgType @ 0: MessageType;
  errorCode @ 1: MessageErrorCode;
  id @ 2: MessageID;
  address @ 3: UInt32;
  length @ 4: UInt32;
  data @ 5: UInt32;
}

 struct StreamData {
  msgType @ 0: MessageType;
  errorCode @ 1: MessageErrorCode;
  command @ 2: Command;
  id @ 3: MessageID;
  shotId @ 4: UInt32;

  channel0Data @ 5: Data;
  channel1Data @ 6: Data;
  channel2Data @ 7: Data;
  channel3Data @ 8: Data;
  channel4Data @ 9: Data;
  channel5Data @ 10: Data;
  channel6Data @ 11: Data;
  channel7Data @ 12: Data;
  channel8Data @ 13: Data;
  channel9Data @ 14: Data;
  channel10Data @ 15: Data;
  channel11Data @ 16: Data;
  channel12Data @ 17: Data;
  channel13Data @ 18: Data;
  channel14Data @ 19: Data;
  channel15Data @ 20: Data;
  channel16Data @ 21: Data;
}
