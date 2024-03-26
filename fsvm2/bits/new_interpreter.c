void interpret(basic_ifstream *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  __type _Var4;
  type tVar5;
  _Ios_Openmode _Var6;
  char *pcVar7;
  undefined4 extraout_var;
  basic_ostream *pbVar8;
  long lVar9;
  basic_ostream<> *this;
  long in_FS_OFFSET;
  undefined auVar10 [16];
  char local_27a;
  long local_278;
  undefined8 local_270;
  basic_string local_268 [32];
  basic_string local_248 [32];
  undefined local_228 [520];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = false;
  do {
    std::basic_istream<>::get((char *)param_1);
    cVar2 = std::basic_ios<>::eof();
    if ((cVar2 != '\0') || (bVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    std::__cxx11::basic_string<>::basic_string();
    std::__cxx11::basic_string<>::basic_string();
    switch(local_27a) {
    case '(':
                    /* try { // try from 001027eb to 001027ef has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060b0);
                    /* try { // try from 00102804 to 00102808 has its CatchHandler @ 00104219 */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102831 to 00102855 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      break;
    case ')':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060b0);
                    /* try { // try from 0010286a to 0010286e has its CatchHandler @ 00104234 */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102894 to 00102898 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060ba);
                    /* try { // try from 001028ad to 001028b1 has its CatchHandler @ 0010424f */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001028d7 to 001028db has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060c4);
                    /* try { // try from 001028f0 to 001028f4 has its CatchHandler @ 0010426a */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      _Var4 = std::operator==(local_268,local_248);
      if ((char)_Var4 != '\0') {
                    /* try { // try from 0010293e to 00102962 has its CatchHandler @ 001048e2 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case '*':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060b0);
                    /* try { // try from 00102977 to 0010297b has its CatchHandler @ 00104285 */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001029a1 to 001029a5 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060ba);
                    /* try { // try from 001029ba to 001029be has its CatchHandler @ 001042a0 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001029e4 to 001029e8 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060c4);
                    /* try { // try from 001029fd to 00102a01 has its CatchHandler @ 001042bb */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      bVar3 = std::operator!=(local_268,local_248);
      if (bVar3) {
                    /* try { // try from 00102a4b to 00102a6f has its CatchHandler @ 001048e2 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case '+':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060ba);
                    /* try { // try from 00102a84 to 00102a88 has its CatchHandler @ 001042d6 */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102aae to 00102ab2 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060c4);
                    /* try { // try from 00102ac7 to 00102acb has its CatchHandler @ 001042f1 */
      std::operator>>((basic_ifstream *)local_228,&local_270);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      if (local_278 < (long)local_270) {
                    /* try { // try from 00102b08 to 00102b0c has its CatchHandler @ 001048e2 */
        std::basic_ifstream<>::basic_ifstream(local_228,0x1060b0);
                    /* try { // try from 00102b21 to 00102b25 has its CatchHandler @ 0010430c */
        std::operator>>((basic_ifstream *)local_228,&local_278);
        std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102b4e to 00102b7e has its CatchHandler @ 001048e2 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case ',':
      remove("regs/reg0");
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ce);
                    /* try { // try from 00102b90 to 00102b94 has its CatchHandler @ 00104327 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '-':
      remove("regs/reg1");
                    /* try { // try from 00102bcb to 00102bcf has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060d9);
                    /* try { // try from 00102be1 to 00102be5 has its CatchHandler @ 00104342 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '.':
      remove("regs/reg2");
                    /* try { // try from 00102c1c to 00102c20 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060e3);
                    /* try { // try from 00102c32 to 00102c36 has its CatchHandler @ 0010435d */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '/':
      remove("regs/reg3");
                    /* try { // try from 00102c6d to 00102c71 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ed);
                    /* try { // try from 00102c83 to 00102c87 has its CatchHandler @ 00104378 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '0':
      remove("regs/reg4");
                    /* try { // try from 00102cbe to 00102cc2 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060f7);
                    /* try { // try from 00102cd4 to 00102cd8 has its CatchHandler @ 00104393 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '1':
      remove("regs/reg5");
                    /* try { // try from 00102d0f to 00102d13 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106101);
                    /* try { // try from 00102d25 to 00102d29 has its CatchHandler @ 001043ae */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '2':
      remove("regs/reg6");
                    /* try { // try from 00102d60 to 00102d64 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10610b);
                    /* try { // try from 00102d76 to 00102d7a has its CatchHandler @ 001043c9 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '3':
      remove("regs/reg7");
                    /* try { // try from 00102db1 to 00102db5 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106115);
                    /* try { // try from 00102dc7 to 00102dcb has its CatchHandler @ 001043e4 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '4':
      remove("regs/reg8");
                    /* try { // try from 00102e02 to 00102e06 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10611f);
                    /* try { // try from 00102e18 to 00102e1c has its CatchHandler @ 001043ff */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '5':
      remove("regs/reg9");
                    /* try { // try from 00102e53 to 00102e57 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106129);
                    /* try { // try from 00102e69 to 00102e6d has its CatchHandler @ 0010441a */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '6':
      remove("regs/rega");
                    /* try { // try from 00102ea4 to 00102ea8 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060b0);
                    /* try { // try from 00102eba to 00102ebe has its CatchHandler @ 00104435 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '7':
      remove("regs/regb");
                    /* try { // try from 00102ef5 to 00102ef9 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ba);
                    /* try { // try from 00102f0b to 00102f0f has its CatchHandler @ 00104450 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '8':
      remove("regs/regc");
                    /* try { // try from 00102f46 to 00102f4a has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060c4);
                    /* try { // try from 00102f5c to 00102f60 has its CatchHandler @ 0010446b */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '9':
      remove("regs/regd");
                    /* try { // try from 00102f97 to 00102f9b has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106133);
                    /* try { // try from 00102fad to 00102fb1 has its CatchHandler @ 00104486 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case ':':
      remove("regs/rege");
                    /* try { // try from 00102fe8 to 00102fec has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10613d);
                    /* try { // try from 00102ffe to 00103002 has its CatchHandler @ 001044a1 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case ';':
      remove("regs/regf");
                    /* try { // try from 00103039 to 0010303d has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106147);
                    /* try { // try from 0010304f to 00103053 has its CatchHandler @ 001044bc */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    default:
                    /* try { // try from 0010413d to 001041c5 has its CatchHandler @ 001048e2 */
      pbVar8 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
      pbVar8 = std::operator<<(pbVar8,"Unknown instruction ");
      pbVar8 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar8,(int)local_27a);
      pbVar8 = std::operator<<(pbVar8," at ");
      auVar10 = std::basic_istream<>::tellg();
      local_228._0_16_ = auVar10;
      lVar9 = std::fpos::operator.cast.to.long((fpos *)local_228);
      this = (basic_ostream<> *)std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar8,lVar9);
      std::basic_ostream<>::operator<<(this,std::endl<>);
      bVar3 = false;
      goto LAB_001041dc;
    case '=':
                    /* try { // try from 0010307c to 001030b5 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 001030ca to 001030ce has its CatchHandler @ 001044d7 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001030f2 to 00103158 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar7);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
      std::__cxx11::basic_string<>::size();
                    /* try { // try from 00103179 to 001031a2 has its CatchHandler @ 001044f2 */
      pcVar7 = (char *)std::__cxx11::basic_string<>::operator[]((ulong)local_268);
      local_270 = CONCAT44(local_270._4_4_,(int)*pcVar7);
      std::operator<<((basic_ofstream *)local_228,(int *)&local_270);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '>':
                    /* try { // try from 001031cb to 00103204 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103219 to 0010321d has its CatchHandler @ 0010450d */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00103241 to 001032a7 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar7);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
      local_270 = CONCAT71(local_270._1_7_,(char)local_278);
                    /* try { // try from 001032c9 to 001032cd has its CatchHandler @ 00104528 */
      std::operator<<((basic_ofstream *)local_228,(char *)&local_270);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '?':
                    /* try { // try from 001032f6 to 0010332f has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103344 to 00103348 has its CatchHandler @ 00104543 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 0010336c to 001033a5 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 001033ba to 001033be has its CatchHandler @ 0010455e */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001033e2 to 00103461 has its CatchHandler @ 001048e2 */
      std::__cxx11::basic_string<>::operator+=((basic_string<> *)local_268,local_248);
      std::basic_istream<>::get((char *)param_1);
      pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar7);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103476 to 0010347a has its CatchHandler @ 00104579 */
      std::operator<<((basic_ofstream *)local_228,local_268);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '@':
      remove("regs/reg0");
                    /* try { // try from 001034b1 to 001034b5 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ce);
                    /* try { // try from 001034c5 to 001034c9 has its CatchHandler @ 00104594 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'A':
      remove("regs/reg1");
                    /* try { // try from 00103500 to 00103504 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060d9);
                    /* try { // try from 00103514 to 00103518 has its CatchHandler @ 001045af */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'B':
      remove("regs/reg2");
                    /* try { // try from 0010354f to 00103553 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060e3);
                    /* try { // try from 00103563 to 00103567 has its CatchHandler @ 001045ca */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'C':
      remove("regs/reg3");
                    /* try { // try from 0010359e to 001035a2 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ed);
                    /* try { // try from 001035b2 to 001035b6 has its CatchHandler @ 001045e5 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'D':
      remove("regs/reg4");
                    /* try { // try from 001035ed to 001035f1 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060f7);
                    /* try { // try from 00103601 to 00103605 has its CatchHandler @ 00104600 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'E':
      remove("regs/reg5");
                    /* try { // try from 0010363c to 00103640 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106101);
                    /* try { // try from 00103650 to 00103654 has its CatchHandler @ 0010461b */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'F':
      remove("regs/reg6");
                    /* try { // try from 0010368b to 0010368f has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10610b);
                    /* try { // try from 0010369f to 001036a3 has its CatchHandler @ 00104636 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'G':
      remove("regs/reg7");
                    /* try { // try from 001036da to 001036de has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106115);
                    /* try { // try from 001036ee to 001036f2 has its CatchHandler @ 00104651 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'H':
      remove("regs/reg8");
                    /* try { // try from 00103729 to 0010372d has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10611f);
                    /* try { // try from 0010373d to 00103741 has its CatchHandler @ 0010466c */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'I':
      remove("regs/reg9");
                    /* try { // try from 00103778 to 0010377c has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106129);
                    /* try { // try from 0010378c to 00103790 has its CatchHandler @ 00104687 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'J':
      remove("regs/rega");
                    /* try { // try from 001037c7 to 001037cb has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060b0);
                    /* try { // try from 001037db to 001037df has its CatchHandler @ 001046a2 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'K':
      remove("regs/regb");
                    /* try { // try from 00103816 to 0010381a has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ba);
                    /* try { // try from 0010382a to 0010382e has its CatchHandler @ 001046bd */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'L':
      remove("regs/regc");
                    /* try { // try from 00103865 to 00103869 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060c4);
                    /* try { // try from 00103879 to 0010387d has its CatchHandler @ 001046d8 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'M':
      remove("regs/regd");
                    /* try { // try from 001038b4 to 001038b8 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106133);
                    /* try { // try from 001038c8 to 001038cc has its CatchHandler @ 001046f3 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'N':
      remove("regs/rege");
                    /* try { // try from 00103903 to 00103907 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x10613d);
                    /* try { // try from 00103917 to 0010391b has its CatchHandler @ 0010470e */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'O':
      remove("regs/regf");
                    /* try { // try from 00103952 to 00103956 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x106147);
                    /* try { // try from 00103966 to 0010396a has its CatchHandler @ 00104729 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'P':
                    /* try { // try from 00103993 to 001039cc has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 001039e1 to 001039e5 has its CatchHandler @ 00104744 */
      std::getline<>((basic_istream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      remove("regs/reg0");
                    /* try { // try from 00103a17 to 00103a1b has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ce);
      local_270 = std::__cxx11::basic_string<>::size();
                    /* try { // try from 00103a46 to 00103a4a has its CatchHandler @ 0010475f */
      std::operator<<((basic_ofstream *)local_228,&local_270);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'Q':
                    /* try { // try from 00103a73 to 00103aac has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103ac1 to 00103ac5 has its CatchHandler @ 0010477a */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00103ae9 to 00103b22 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103b37 to 00103b3b has its CatchHandler @ 00104795 */
      std::operator>>((basic_ifstream *)local_228,&local_270);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      local_278 = local_270 + local_278;
                    /* try { // try from 00103b77 to 00103bdd has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar7);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103bf2 to 00103bf6 has its CatchHandler @ 001047b0 */
      std::operator<<((basic_ofstream *)local_228,&local_278);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'R':
                    /* try { // try from 00103c1f to 00103c58 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103c6a to 00103c6e has its CatchHandler @ 001047cb */
      std::operator<<((basic_ofstream *)local_228,"1");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'S':
                    /* try { // try from 00103c97 to 00103cd0 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103ce5 to 00103ce9 has its CatchHandler @ 001047e6 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      lVar9 = std::__cxx11::basic_string<>::size();
      if (lVar9 != 0) {
        std::__cxx11::basic_string<>::pop_back();
        pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
        remove(pcVar7);
                    /* try { // try from 00103d82 to 00103d86 has its CatchHandler @ 001048e2 */
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180)
        ;
                    /* try { // try from 00103d9b to 00103d9f has its CatchHandler @ 00104801 */
        std::operator<<((basic_ofstream *)local_228,local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      break;
    case 'T':
                    /* try { // try from 00103dc8 to 00103e01 has its CatchHandler @ 001048e2 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x108180);
                    /* try { // try from 00103e16 to 00103e1a has its CatchHandler @ 0010481c */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      pcVar7 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar7);
                    /* try { // try from 00103e66 to 00103ec4 has its CatchHandler @ 001048e2 */
      pcVar7 = (char *)std::__cxx11::basic_string<>::operator[]((ulong)local_268);
      if (*pcVar7 == '-') {
        std::__cxx11::basic_string<>::erase((ulong)local_268,0);
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180)
        ;
                    /* try { // try from 00103ed9 to 00103edd has its CatchHandler @ 00104837 */
        std::operator<<((basic_ofstream *)local_228,local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      else {
                    /* try { // try from 00103f22 to 00103f26 has its CatchHandler @ 001048e2 */
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x108180)
        ;
                    /* try { // try from 00103f38 to 00103f51 has its CatchHandler @ 00104852 */
        tVar5 = std::operator<<((basic_ofstream *)local_228,"-");
        std::operator<<((basic_ostream *)CONCAT44(extraout_var,tVar5),local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      break;
    case 'U':
                    /* try { // try from 00103f7c to 00103f80 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x106147);
                    /* try { // try from 00103f95 to 00103f99 has its CatchHandler @ 0010486a */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00103fba to 00103ff3 has its CatchHandler @ 001048e2 */
      pbVar8 = std::operator<<((basic_ostream *)std::cout,local_268);
      std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar8,std::endl<>);
      break;
    case 'V':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1060ce);
                    /* try { // try from 00104008 to 0010400c has its CatchHandler @ 00104882 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      _Var6 = std::__cxx11::basic_string<>::c_str();
                    /* try { // try from 00104040 to 00104044 has its CatchHandler @ 001048e2 */
      std::basic_ifstream<>::basic_ifstream(local_228,_Var6);
                    /* try { // try from 00104055 to 00104059 has its CatchHandler @ 0010489a */
      cVar2 = std::basic_ios<>::fail();
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      if (cVar2 == '\0') {
        _Var6 = std::__cxx11::basic_string<>::c_str();
        std::basic_ifstream<>::basic_ifstream(local_228,_Var6);
                    /* try { // try from 001040c4 to 001040c8 has its CatchHandler @ 001048b2 */
        std::operator>>((basic_ifstream *)local_228,local_268);
        std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      }
      else {
                    /* try { // try from 00104080 to 001040af has its CatchHandler @ 001048e2 */
        std::__cxx11::basic_string<>::operator=((basic_string<> *)local_268,"-1");
      }
                    /* try { // try from 001040ee to 001040f2 has its CatchHandler @ 001048e2 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1060ce);
                    /* try { // try from 00104107 to 0010410b has its CatchHandler @ 001048ca */
      std::operator<<((basic_ofstream *)local_228,local_268);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'W':
      bVar1 = true;
    }
    bVar3 = true;
LAB_001041dc:
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_248);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_268);
  } while (bVar3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
