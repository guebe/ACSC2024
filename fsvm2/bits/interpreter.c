/* interpret(std::basic_ifstream<char, std::char_traits<char> >&) */

void interpret(basic_ifstream *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  __type _Var4;
  type tVar5;
  char *pcVar6;
  undefined4 extraout_var;
  basic_ostream *pbVar7;
  long lVar8;
  basic_ostream<> *this;
  long in_FS_OFFSET;
  undefined auVar9 [16];
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
                    /* try { // try from 0010278b to 0010278f has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050b0);
                    /* try { // try from 001027a4 to 001027a8 has its CatchHandler @ 00103af0 */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001027d1 to 001027f5 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      break;
    case ')':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050b0);
                    /* try { // try from 0010280a to 0010280e has its CatchHandler @ 00103b0b */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102834 to 00102838 has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050ba);
                    /* try { // try from 0010284d to 00102851 has its CatchHandler @ 00103b26 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102877 to 0010287b has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050c4);
                    /* try { // try from 00102890 to 00102894 has its CatchHandler @ 00103b41 */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      _Var4 = std::operator==(local_268,local_248);
      if ((char)_Var4 != '\0') {
                    /* try { // try from 001028de to 00102902 has its CatchHandler @ 00103f82 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case '*':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050b0);
                    /* try { // try from 00102917 to 0010291b has its CatchHandler @ 00103b5c */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102941 to 00102945 has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050ba);
                    /* try { // try from 0010295a to 0010295e has its CatchHandler @ 00103b77 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102984 to 00102988 has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050c4);
                    /* try { // try from 0010299d to 001029a1 has its CatchHandler @ 00103b92 */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      bVar3 = std::operator!=(local_268,local_248);
      if (bVar3) {
                    /* try { // try from 001029eb to 00102a0f has its CatchHandler @ 00103f82 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case '+':
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050ba);
                    /* try { // try from 00102a24 to 00102a28 has its CatchHandler @ 00103bad */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102a4e to 00102a52 has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050c4);
                    /* try { // try from 00102a67 to 00102a6b has its CatchHandler @ 00103bc8 */
      std::operator>>((basic_ifstream *)local_228,&local_270);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      if (local_278 < CONCAT44(local_270._4_4_,(int)local_270)) {
                    /* try { // try from 00102aa8 to 00102aac has its CatchHandler @ 00103f82 */
        std::basic_ifstream<>::basic_ifstream(local_228,0x1050b0);
                    /* try { // try from 00102ac1 to 00102ac5 has its CatchHandler @ 00103be3 */
        std::operator>>((basic_ifstream *)local_228,&local_278);
        std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102aee to 00102b1e has its CatchHandler @ 00103f82 */
        std::basic_istream<>::seekg((long)param_1,(_Ios_Seekdir)local_278);
      }
      break;
    case ',':
      remove("regs/reg0");
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ce);
                    /* try { // try from 00102b30 to 00102b34 has its CatchHandler @ 00103bfe */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '-':
      remove("regs/reg1");
                    /* try { // try from 00102b6b to 00102b6f has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050d9);
                    /* try { // try from 00102b81 to 00102b85 has its CatchHandler @ 00103c19 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '.':
      remove("regs/reg2");
                    /* try { // try from 00102bbc to 00102bc0 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050e3);
                    /* try { // try from 00102bd2 to 00102bd6 has its CatchHandler @ 00103c34 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '/':
      remove("regs/reg3");
                    /* try { // try from 00102c0d to 00102c11 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ed);
                    /* try { // try from 00102c23 to 00102c27 has its CatchHandler @ 00103c4f */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '0':
      remove("regs/reg4");
                    /* try { // try from 00102c5e to 00102c62 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050f7);
                    /* try { // try from 00102c74 to 00102c78 has its CatchHandler @ 00103c6a */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '1':
      remove("regs/reg5");
                    /* try { // try from 00102caf to 00102cb3 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050b0);
                    /* try { // try from 00102cc5 to 00102cc9 has its CatchHandler @ 00103c85 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '2':
      remove("regs/reg6");
                    /* try { // try from 00102d00 to 00102d04 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ba);
                    /* try { // try from 00102d16 to 00102d1a has its CatchHandler @ 00103ca0 */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '3':
      remove("regs/reg7");
                    /* try { // try from 00102d51 to 00102d55 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050c4);
                    /* try { // try from 00102d67 to 00102d6b has its CatchHandler @ 00103cbb */
      std::operator<<((basic_ofstream *)local_228,"");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    default:
                    /* try { // try from 00103a14 to 00103a9c has its CatchHandler @ 00103f82 */
      pbVar7 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
      pbVar7 = std::operator<<(pbVar7,"Unknown instruction ");
      pbVar7 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar7,(int)local_27a);
      pbVar7 = std::operator<<(pbVar7," at ");
      auVar9 = std::basic_istream<>::tellg();
      local_228._0_16_ = auVar9;
      lVar8 = std::fpos::operator.cast.to.long((fpos *)local_228);
      this = (basic_ostream<> *)std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar7,lVar8);
      std::basic_ostream<>::operator<<(this,std::endl<>);
      bVar3 = false;
      goto LAB_00103ab3;
    case '=':
                    /* try { // try from 00102d94 to 00102dcd has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 00102de2 to 00102de6 has its CatchHandler @ 00103cd6 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102e0a to 00102e70 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar6);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
      std::__cxx11::basic_string<>::size();
                    /* try { // try from 00102e91 to 00102eba has its CatchHandler @ 00103cf1 */
      pcVar6 = (char *)std::__cxx11::basic_string<>::operator[]((ulong)local_268);
      local_270._0_4_ = (int)*pcVar6;
      std::operator<<((basic_ofstream *)local_228,(int *)&local_270);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '>':
                    /* try { // try from 00102ee3 to 00102f1c has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 00102f31 to 00102f35 has its CatchHandler @ 00103d0c */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00102f59 to 00102fbf has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar6);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
      local_270._0_4_ = CONCAT31(local_270._1_3_,(char)local_278);
                    /* try { // try from 00102fe1 to 00102fe5 has its CatchHandler @ 00103d27 */
      std::operator<<((basic_ofstream *)local_228,(char *)&local_270);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '?':
                    /* try { // try from 0010300e to 00103047 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 0010305c to 00103060 has its CatchHandler @ 00103d42 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 00103084 to 001030bd has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 001030d2 to 001030d6 has its CatchHandler @ 00103d5d */
      std::operator>>((basic_ifstream *)local_228,local_248);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001030fa to 00103179 has its CatchHandler @ 00103f82 */
      std::__cxx11::basic_string<>::operator+=((basic_string<> *)local_268,local_248);
      std::basic_istream<>::get((char *)param_1);
      pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar6);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 0010318e to 00103192 has its CatchHandler @ 00103d78 */
      std::operator<<((basic_ofstream *)local_228,local_268);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case '@':
      remove("regs/reg0");
                    /* try { // try from 001031c9 to 001031cd has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ce);
                    /* try { // try from 001031dd to 001031e1 has its CatchHandler @ 00103d93 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'A':
      remove("regs/reg1");
                    /* try { // try from 00103218 to 0010321c has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050d9);
                    /* try { // try from 0010322c to 00103230 has its CatchHandler @ 00103dae */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'B':
      remove("regs/reg2");
                    /* try { // try from 00103267 to 0010326b has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050e3);
                    /* try { // try from 0010327b to 0010327f has its CatchHandler @ 00103dc9 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'C':
      remove("regs/reg3");
                    /* try { // try from 001032b6 to 001032ba has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ed);
                    /* try { // try from 001032ca to 001032ce has its CatchHandler @ 00103de4 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'D':
      remove("regs/reg4");
                    /* try { // try from 00103305 to 00103309 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050f7);
                    /* try { // try from 00103319 to 0010331d has its CatchHandler @ 00103dff */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'E':
      remove("regs/reg5");
                    /* try { // try from 00103354 to 00103358 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050b0);
                    /* try { // try from 00103368 to 0010336c has its CatchHandler @ 00103e1a */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'F':
      remove("regs/reg6");
                    /* try { // try from 001033a3 to 001033a7 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ba);
                    /* try { // try from 001033b7 to 001033bb has its CatchHandler @ 00103e35 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'G':
      remove("regs/reg7");
                    /* try { // try from 001033f2 to 001033f6 has its CatchHandler @ 00103f82 */
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050c4);
                    /* try { // try from 00103406 to 0010340a has its CatchHandler @ 00103e50 */
      std::basic_ostream<>::put((char)local_228);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'Q':
                    /* try { // try from 00103433 to 0010346c has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 00103481 to 00103485 has its CatchHandler @ 00103e6b */
      std::operator>>((basic_ifstream *)local_228,&local_278);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 001034a9 to 001034e2 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 001034f7 to 001034fb has its CatchHandler @ 00103e86 */
      std::operator>>((basic_ifstream *)local_228,&local_270);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      local_278 = CONCAT44(local_270._4_4_,(int)local_270) + local_278;
                    /* try { // try from 00103537 to 0010359d has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar6);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 001035b2 to 001035b6 has its CatchHandler @ 00103ea1 */
      std::operator<<((basic_ofstream *)local_228,&local_278);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'R':
                    /* try { // try from 001035df to 00103618 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 0010362a to 0010362e has its CatchHandler @ 00103ebc */
      std::operator<<((basic_ofstream *)local_228,"1");
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'S':
                    /* try { // try from 00103657 to 00103690 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 001036a5 to 001036a9 has its CatchHandler @ 00103ed7 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      lVar8 = std::__cxx11::basic_string<>::size();
      if (lVar8 != 0) {
        std::__cxx11::basic_string<>::pop_back();
        pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
        remove(pcVar6);
                    /* try { // try from 00103742 to 00103746 has its CatchHandler @ 00103f82 */
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0)
        ;
                    /* try { // try from 0010375b to 0010375f has its CatchHandler @ 00103ef2 */
        std::operator<<((basic_ofstream *)local_228,local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      break;
    case 'T':
                    /* try { // try from 00103788 to 001037c1 has its CatchHandler @ 00103f82 */
      std::basic_istream<>::get((char *)param_1);
      std::basic_ifstream<>::basic_ifstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0);
                    /* try { // try from 001037d6 to 001037da has its CatchHandler @ 00103f0a */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
      pcVar6 = (char *)std::__cxx11::basic_string<>::c_str();
      remove(pcVar6);
                    /* try { // try from 00103826 to 00103884 has its CatchHandler @ 00103f82 */
      pcVar6 = (char *)std::__cxx11::basic_string<>::operator[]((ulong)local_268);
      if (*pcVar6 == '-') {
        std::__cxx11::basic_string<>::erase((ulong)local_268,0);
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0)
        ;
                    /* try { // try from 00103899 to 0010389d has its CatchHandler @ 00103f22 */
        std::operator<<((basic_ofstream *)local_228,local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      else {
                    /* try { // try from 001038e2 to 001038e6 has its CatchHandler @ 00103f82 */
        std::basic_ofstream<>::basic_ofstream((basic_string *)local_228,local_27a * 0x20 + 0x1072a0)
        ;
                    /* try { // try from 001038f8 to 00103911 has its CatchHandler @ 00103f3a */
        tVar5 = std::operator<<((basic_ofstream *)local_228,"-");
        std::operator<<((basic_ostream *)CONCAT44(extraout_var,tVar5),local_268);
        std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      }
      break;
    case 'U':
                    /* try { // try from 0010393c to 00103940 has its CatchHandler @ 00103f82 */
      std::basic_ifstream<>::basic_ifstream(local_228,0x1050f7);
                    /* try { // try from 00103955 to 00103959 has its CatchHandler @ 00103f52 */
      std::operator>>((basic_ifstream *)local_228,local_268);
      std::basic_ifstream<>::~basic_ifstream((basic_ifstream<> *)local_228);
                    /* try { // try from 0010397a to 001039c9 has its CatchHandler @ 00103f82 */
      pbVar7 = std::operator<<((basic_ostream *)std::cout,local_268);
      std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar7,std::endl<>);
      break;
    case 'V':
      std::operator>>((basic_istream *)std::cin,local_268);
      std::basic_ofstream<>::basic_ofstream(local_228,0x1050ce);
                    /* try { // try from 001039de to 001039e2 has its CatchHandler @ 00103f6a */
      std::operator<<((basic_ofstream *)local_228,local_268);
      std::basic_ofstream<>::~basic_ofstream((basic_ofstream<> *)local_228);
      break;
    case 'W':
      bVar1 = true;
    }
    bVar3 = true;
LAB_00103ab3:
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_248);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_268);
  } while (bVar3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

