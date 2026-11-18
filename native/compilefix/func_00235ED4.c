int albw_atan2_inline(float a, float b);
/* compilefix: USA 00235ED4 (EU 00235ED4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: statement requires expression of integer type ('undefined4 *' (aka 'unsigned int *') invalid)
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - switch on a pointer-typed variable / (T *)N case labels -> integer switch, same values [14]
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001E4D1C(ushort *param_1,int param_2,char param_3,float *param_4,int param_5);
extern int func_001E510C(int param_1,float *param_2);
extern int func_00237288(int *param_1,uint param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00291910(int param_1);
extern int func_002AF82C(undefined4 param_1);
extern int func_002AF83C(undefined4 param_1);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004905E0(float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_0053F480(int param_1);
extern int func_00556B54(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern undefined DAT_00000009;
extern undefined DAT_0000000a;
extern undefined DAT_0000000d;
extern undefined DAT_0000000f;
extern undefined DAT_00000011;
extern int *DAT_00236234;
extern int DAT_00236238;
extern float DAT_0023623c;
extern float * * * * * *DAT_00236240;
extern undefined4 DAT_00236244;
extern undefined4 DAT_00236248;
extern int DAT_0023624c;
extern int *DAT_00236250;
extern uint DAT_00236254;
extern undefined4 DAT_00236dc4;
extern int DAT_00236dc8;
extern int DAT_00236dcc;
extern undefined4 DAT_00236dd0;
extern undefined4 DAT_00236dd4;
extern undefined4 DAT_00236dd8;
extern float *DAT_00236ddc;
extern int *DAT_00236de0;
extern float DAT_00236de4;
extern float * * * * * *DAT_00236de8;
extern int DAT_00236dec;
extern int DAT_00236df0;
extern int DAT_00236df4;
extern int *DAT_00236df8;
extern int *DAT_00236dfc;
extern int *DAT_00236e00;
extern undefined4 DAT_00236e04;
extern uint *DAT_0023726c;
extern undefined4 *DAT_00237270;
extern undefined4 DAT_00237274;
extern uint DAT_00237278;
extern float DAT_0023727c;
extern int DAT_00237280;
extern float DAT_00237284;

// USA 00235ED4 <- EU 00235ED4 (Ghidra, non-matching)
// GLOBAL DAT_00000009 undefined
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0000000d undefined
// GLOBAL DAT_0000000f undefined
// GLOBAL DAT_00000011 undefined
// GLOBAL DAT_00236234 int *
// GLOBAL DAT_00236238 int
// GLOBAL DAT_0023623c float
// GLOBAL DAT_00236240 float * * * * * *
// GLOBAL DAT_00236244 undefined4
// GLOBAL DAT_00236248 undefined4
// GLOBAL DAT_0023624c int
// GLOBAL DAT_00236250 int *
// GLOBAL DAT_00236254 uint
// GLOBAL DAT_00236dc4 undefined4
// GLOBAL DAT_00236dc8 int
// GLOBAL DAT_00236dcc int
// GLOBAL DAT_00236dd0 undefined4
// GLOBAL DAT_00236dd4 undefined4
// GLOBAL DAT_00236dd8 undefined4
// GLOBAL DAT_00236ddc float *
// GLOBAL DAT_00236de0 int *
// GLOBAL DAT_00236de4 float
// GLOBAL DAT_00236de8 float * * * * * *
// GLOBAL DAT_00236dec int
// GLOBAL DAT_00236df0 int
// GLOBAL DAT_00236df4 int
// GLOBAL DAT_00236df8 int *
// GLOBAL DAT_00236dfc int *
// GLOBAL DAT_00236e00 int *
// GLOBAL DAT_00236e04 undefined4
// GLOBAL DAT_0023726c uint *
// GLOBAL DAT_00237270 undefined4 *
// GLOBAL DAT_00237274 undefined4
// GLOBAL DAT_00237278 uint
// GLOBAL DAT_0023727c float
// GLOBAL DAT_00237280 int
// GLOBAL DAT_00237284 float
// GLOBAL EXT_00000008 undefined

undefined4 func_00235ED4(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  byte bVar7;
  bool bVar8;
  undefined2 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  ushort uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  uint in_fpscr;
  float ******ppppppfVar29;
  float ******fparam_0;
  float fVar30;
  float fVar31;
  float fVar32;
  float ******ppppppfVar33;
  float fVar34;
  undefined8 uVar35;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_c4 (*(float ***** *)(albw_frame + 0xc))
  #define local_c0 (*(float ***** *)(albw_frame + 0x10))
  #define local_bc (*(float ***** *)(albw_frame + 0x14))
  #define local_b8 (*(float ***** *)(albw_frame + 0x18))
  #define local_b4 (*(float ***** *)(albw_frame + 0x1c))
  #define local_b0 (*(float ***** *)(albw_frame + 0x20))
  #define afStack_98 ((float *)(albw_frame + 0x38))
  #define local_54 (*(int * *)(albw_frame + 0x7c))
  #define local_50 (*(byte * *)(albw_frame + 0x80))
  #define local_48 (*(float * *)(albw_frame + 0x88))
  #define local_44 (*(undefined4 *)(albw_frame + 0x8c))
  iVar24 = 0;
  iVar27 = param_1[0x18c];
  iVar25 = param_1[0x18d];
  iVar10 = func_0053F480(*DAT_00236234);
  if (iVar10 == 0) {
    param_1[0x187] = DAT_00236238;
  }
  uVar23 = 0xffffffff;
  if (iVar27 == 0) {
    return 0;
  }
  local_54 = param_1 + 0x180;
  uVar35 = CONCAT44(DAT_00236248,DAT_00236244);
  local_50 = (byte *)((int)param_1 + 0x64b);
  ppppppfVar33 = DAT_00236240;
  fVar34 = DAT_0023623c;
  do {
    uVar23 = uVar23 + 1;
    uVar17 = iVar24 * 0x104 + 8;
    iVar10 = *(int *)(iVar25 + uVar17);
    if (iVar10 != 0) {
      uVar17 = param_1[0x11e];
    }
    if (iVar10 == 0 || uVar17 <= uVar23) {
      return 0;
    }
    iVar26 = *(int *)(param_1[0x120] + uVar23 * 4);
    if (iVar26 == 0) {
      return 0;
    }
    cVar1 = *(char *)(iVar25 + iVar24 * 0x104);
    if (cVar1 == '\x01') {
      if ((*(short *)(iVar25 + iVar24 * 0x104 + 0xe8) == 0) ||
         (iVar10 = iVar25 + iVar24 * 0x104,
         *(short *)(iVar10 + 0xe8) = *(short *)(iVar10 + 0xe8) + -1,
         *(short *)(iVar25 + iVar24 * 0x104 + 0xe8) == 0)) {
        func_00291910(*DAT_00236234);
        func_00237288(param_1,uVar23,1);
      }
    }
    else {
      if (cVar1 == '\x02') {
        iVar10 = iVar25 + iVar24 * 0x104;
        uVar6 = *(ushort *)(iVar10 + 0xe8);
        uVar22 = uVar6 + 1;
        *(ushort *)(iVar10 + 0xe8) = uVar22;
        iVar10 = DAT_0023624c;
        if (uVar6 < 0x3d) {
          fVar30 = (float)VectorUnsignedToFloat((uint)uVar22,(byte)(in_fpscr >> 0x15) & 3);
          fVar30 = fVar30 * fVar34;
          (**(code **)**(undefined4 **)
                        (DAT_0023624c + (uint)*(byte *)((int)param_1 + 0x64b) * 8 + 4))();
          iVar26 = *(int *)(iVar25 + iVar24 * 0x104 + 0x10);
          pbVar18 = *(byte **)(iVar10 + (uint)*local_50 * 8);
          fVar31 = (float)VectorSignedToFloat((uint)*(byte *)(iVar26 + 0x43),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar32 = (float)VectorSignedToFloat((uint)pbVar18[3] - (uint)*(byte *)(iVar26 + 0x43),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(char *)(iVar26 + 0x43) = (char)(int)(fVar31 + fVar32 * fVar30);
          fVar31 = (float)VectorSignedToFloat((uint)*(byte *)(iVar26 + 0x44),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar32 = (float)VectorSignedToFloat((uint)pbVar18[2] - (uint)*(byte *)(iVar26 + 0x44),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(char *)(iVar26 + 0x44) = (char)(int)(fVar31 + fVar32 * fVar30);
          fVar31 = (float)VectorSignedToFloat((uint)*(byte *)(iVar26 + 0x45),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar32 = (float)VectorSignedToFloat((uint)pbVar18[1] - (uint)*(byte *)(iVar26 + 0x45),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(char *)(iVar26 + 0x45) = (char)(int)(fVar31 + fVar32 * fVar30);
          fVar31 = (float)VectorSignedToFloat((uint)*(byte *)(iVar26 + 0x46),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar32 = (float)VectorSignedToFloat((uint)*pbVar18 - (uint)*(byte *)(iVar26 + 0x46),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(char *)(iVar26 + 0x46) = (char)(int)(fVar31 + fVar32 * fVar30);
        }
        else {
          *(undefined1 *)(iVar25 + iVar24 * 0x104) = 5;
        }
        iVar10 = iVar25 + iVar24 * 0x104;
        piVar11 = *(int **)(iVar10 + 8);
        (**(code **)(*piVar11 + 0x10))(piVar11,*(char *)(iVar10 + 0xea) + '&');
        goto LAB_00237254;
      }
      if (cVar1 == '\x03') {
        func_0034CA20(*(undefined4 **)(iVar25 + iVar24 * 0x104 + 0x84));
        iVar10 = iVar25 + iVar24 * 0x104;
        if ((*(uint *)(*(int *)(iVar10 + 8) + 0x164) & 0x20000) == 0) {
          local_c8 = *(undefined4 **)(iVar25 + iVar24 * 0x104 + 0x1c);
          if ((*DAT_00236250 == 0) ||
             (cVar1 = *(char *)(*DAT_00236250 + 0x18), uVar17 = DAT_00236254,
             cVar1 != '\a' && cVar1 != '%')) {
            uVar17 = 0x1f00;
          }
          func_001E510C(iVar10 + 0xcc,(float *)(iVar26 + 4));
          func_0014E2A0((int)param_1,(undefined4)(uintptr_t)(local_c8),iVar25 + iVar24 * 0x104 + 0x8c,uVar17,0,0);
          iVar10 = (int)*(char *)(*(int *)(iVar25 + iVar24 * 0x104 + 0x84) + 0x21);
          switch(iVar10) {
          case 1:
          case 3:
          case 5:
          case 6:
          case 8:
          case 10:
          case 0xd:
          case 0xf:
            iVar26 = 3;
            *(undefined1 *)(iVar25 + iVar24 * 0x104 + 0x101) = 1;
            if (iVar10 == 3) {
              if (*(char *)(*(int *)(iVar25 + iVar24 * 0x104 + 0x84) + 0x23) == '\x01')
              goto LAB_002362f0;
            }
            else {
              if ((iVar10 == 1 || iVar10 == 0xf) || iVar10 == 0xd) {
LAB_002362f0:
                iVar26 = 2;
              }
              func_00237288(param_1,uVar23,iVar26);
            }
          }
        }
        iVar10 = iVar25 + iVar24 * 0x104;
        uVar17 = *(uint *)(iVar10 + 0xec);
        if (uVar17 < *(uint *)(iVar10 + 0xf0)) {
          *(uint *)(iVar10 + 0xec) = uVar17 + 1;
        }
        else {
          *(undefined1 *)(iVar10 + 0x101) = 1;
          func_00237288(param_1,uVar23,3);
        }
        goto LAB_00237254;
      }
      if (cVar1 == '\x04') {
        func_00237288(param_1,uVar23,4);
        goto LAB_00237254;
      }
      if (cVar1 != '\0') goto LAB_00237254;
      if (*(short *)(iVar25 + iVar24 * 0x104 + 0xe8) != 0) {
        iVar12 = iVar25 + iVar24 * 0x104;
        *(short *)(iVar12 + 0xe8) = *(short *)(iVar12 + 0xe8) + -1;
      }
      func_0034CA20(*(undefined4 **)(iVar25 + iVar24 * 0x104 + 0x84));
      local_c8 = *(undefined4 **)(iVar25 + iVar24 * 0x104 + 0x1c);
      iVar12 = iVar25 + iVar24 * 0x104;
      if ((*(uint *)(*(int *)(iVar12 + 8) + 0x164) & 0x20000) == 0) {
        if ((*DAT_00236250 == 0) ||
           (cVar1 = *(char *)(*DAT_00236250 + 0x18), uVar17 = DAT_00236254,
           cVar1 != '\a' && cVar1 != '%')) {
          uVar17 = 0x1f00;
        }
        func_001E510C(iVar12 + 0xcc,(float *)(iVar26 + 4));
        if (*(char *)((int)local_54 + 0x49) == '\0') {
          iVar12 = iVar25 + iVar24 * 0x104;
          func_0014E2A0((int)param_1,(undefined4)(uintptr_t)(local_c8),iVar12 + 0x8c,uVar17,iVar12 + 0xac,0);
        }
        else {
          func_0014E2A0((int)param_1,(undefined4)(uintptr_t)(local_c8),iVar25 + iVar24 * 0x104 + 0x8c,uVar17,0,0);
        }
        iVar19 = iVar25 + iVar24 * 0x104;
        iVar12 = *(int *)(iVar19 + 0x84);
        local_c8 = (undefined4 *)(int)*(char *)(iVar12 + 0x21);
        iVar12 = func_001E4D1C((ushort *)(iVar19 + 0xcc),(int)local_c8,
                               (byte)((uint)*(undefined4 *)(iVar12 + 0x38) >> 0x1c),
                               (float *)(iVar26 + 4),(uint)(*(char *)((int)local_54 + 0x49) == '\0')
                              );
        if (iVar12 != 0) {
          if ((*DAT_00236234 != 0) && (bVar8 = func_00556B54(*DAT_00236234), !bVar8)) {
            return func_00237288(param_1,uVar23,1);
          }
          *(undefined1 *)(iVar25 + iVar24 * 0x104) = 1;
          *(undefined2 *)(iVar25 + iVar24 * 0x104 + 0xe8) = 5;
          return 0;
        }
        iVar12 = iVar25 + iVar24 * 0x104;
        if (*(short *)(iVar12 + 0xcc) != 0) {
          *(undefined1 *)(iVar12 + 0x100) = 1;
          *(undefined4 *)(iVar25 + iVar24 * 0x104 + 0xe4) = DAT_00236dc4;
          ppppppfVar29 = &local_c4;
          local_c4 = (float *****)ppppppfVar33;
          local_c0 = (float *****)ppppppfVar33;
          local_bc = (float *****)ppppppfVar33;
          pfVar13 = (float *)func_00520FC0();
          func_00115C70((float *)ppppppfVar29,pfVar13,(float *)(iVar26 + 4));
          uVar17 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
          iVar12 = albw_atan2_inline(ALBW_AS_F32(local_bc),ALBW_AS_F32(local_c4));   /* inlined atan2Idx (atan2_inline_fix) */
          *(int *)(iVar25 + iVar24 * 0x104 + 0xd0) = iVar12;
        }
        switch((int)(uintptr_t)(local_c8)) {
        case 0x1:
        case 0x3:
        case 0x6:
        case 0xa:
        case 0xd:
        case 0xf:
          iVar12 = 0;
          if (local_c8 == (undefined4 *)&DAT_0000000a) {
            *(undefined1 *)(iVar25 + iVar24 * 0x104 + 0x101) = 1;
          }
          else {
            if (local_c8 == (undefined4 *)0x3) {
              if (*(char *)(*(int *)(iVar25 + iVar24 * 0x104 + 0x84) + 0x23) != '\x01') break;
            }
            else if ((local_c8 != (undefined4 *)0x1 && local_c8 != (undefined4 *)&DAT_0000000f) &&
                     local_c8 != (undefined4 *)&DAT_0000000d) goto LAB_002366c8;
            iVar12 = 2;
          }
LAB_002366c8:
          func_00237288(param_1,uVar23,iVar12);
          break;
        case 0x2:
          if (uVar23 < (uint)param_1[0x18c]) {
            iVar12 = param_1[0x18d] + uVar23 * 0x104;
          }
          else {
            iVar12 = param_1[0x18d];
          }
          func_004CE68C(*(int *)(iVar12 + 8),1,*(int *)(iVar12 + 0x10));
          (**(code **)(**(int **)(iVar12 + 8) + 0x10))
                    (*(int **)(iVar12 + 8),*(char *)(iVar12 + 0xea) + '(');
          iVar19 = func_00588BE4((int)param_1);
          if (iVar19 == *DAT_00236dfc) {
            iVar12 = *(int *)(iVar12 + 0x10);
            *(undefined1 *)(iVar12 + 0x42) = 1;
            *(undefined4 *)(iVar12 + 0x3e) = 0xffbfa5;
          }
          else {
            iVar19 = func_00588BE4((int)param_1);
            if (iVar19 == *DAT_00236e00) {
              iVar12 = *(int *)(iVar12 + 0x10);
              *(undefined1 *)(iVar12 + 0x42) = 1;
              *(undefined4 *)(iVar12 + 0x3e) = 0xffbf7f;
            }
            else {
              puVar14 = (undefined1 *)func_002AF82C(iVar19);
              uVar2 = puVar14[3];
              uVar3 = puVar14[2];
              uVar4 = puVar14[1];
              uVar5 = *puVar14;
              iVar19 = *(int *)(iVar12 + 0x10);
              *(undefined1 *)(iVar19 + 0x3d) = 1;
              *(uint *)(iVar19 + 0x39) = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
              puVar14 = (undefined1 *)func_002AF83C(iVar19);
              uVar2 = puVar14[3];
              uVar3 = puVar14[2];
              uVar4 = puVar14[1];
              uVar5 = *puVar14;
              iVar12 = *(int *)(iVar12 + 0x10);
              *(undefined1 *)(iVar12 + 0x42) = 1;
              *(uint *)(iVar12 + 0x3e) = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            }
          }
          uVar20 = DAT_00236e04;
          iVar12 = iVar25 + iVar24 * 0x104;
          *(undefined4 *)(iVar12 + 0xf0) = 0x78;
          *(undefined4 *)(iVar12 + 0xf4) = uVar20;
          *(undefined4 *)(iVar12 + 0xec) = 0;
          *(undefined1 *)(iVar25 + iVar24 * 0x104) = 3;
          break;
        case 0x7:
        case 0x8:
        case 0x9:
        case 0xb:
        case 0xc:
        case 0x11:
          if (*(char *)(iVar25 + DAT_00236dc8 + iVar24 * 0x104) != '\0') {
            func_00237288(param_1,uVar23,2);
            break;
          }
          if ((local_c8 == (undefined4 *)&SupervisorCall) &&
             (*(char *)((int)local_54 + 0x49) == '\0')) {
            func_00237288(param_1,uVar23,0);
            break;
          }
          iVar21 = iVar25 + iVar24 * 0x104;
          iVar19 = *(int *)(iVar21 + 0xe4);
          bVar8 = SBORROW4(iVar19,DAT_00236dcc);
          iVar12 = iVar19 - DAT_00236dcc;
          if (iVar19 < DAT_00236dcc) {
            iVar12 = (DAT_00236dcc >> 0x19) - DAT_00236dcc;
            bVar8 = SBORROW4(iVar12,iVar19);
            iVar12 = iVar12 - iVar19;
          }
          if (iVar12 < 0 != bVar8) {
            if (local_c8 == (undefined4 *)&DAT_00000011) {
              if (*(short *)(iVar21 + 0xe8) == 0) {
                pfVar13 = *(float **)(*DAT_00236234 + 0x20);
                uVar17 = in_fpscr & 0xfffffff;
                in_fpscr = uVar17 | (uint)(*pfVar13 == ALBW_AS_F32(ppppppfVar33)) << 0x1e;
                bVar8 = false;
                if (SUB41(in_fpscr >> 0x1e,0)) {
                  in_fpscr = uVar17 | (uint)(pfVar13[1] == ALBW_AS_F32(ppppppfVar33)) << 0x1e;
                  bVar8 = SUB41(in_fpscr >> 0x1e,0);
                }
                bVar28 = false;
                if (bVar8) {
                  in_fpscr = in_fpscr & 0xfffffff |
                             (uint)(pfVar13[2] == ALBW_AS_F32(ppppppfVar33)) << 0x1e;
                  bVar28 = SUB41(in_fpscr >> 0x1e,0);
                }
                if (!bVar28) goto LAB_002367f0;
              }
              break;
            }
LAB_002367f0:
            if (*(char *)((int)local_54 + 0x49) == '\0') {
              uVar9 = 0x14;
            }
            else {
              uVar9 = 0;
            }
            *(undefined2 *)(iVar21 + 0xe8) = uVar9;
            *(undefined1 *)(iVar25 + iVar24 * 0x104 + 0x100) = 1;
            uVar20 = DAT_00236dd0;
            if (local_c8 != (undefined4 *)&DAT_00000009) {
              uVar20 = DAT_00236dd4;
            }
            *(undefined4 *)(iVar25 + iVar24 * 0x104 + 0xe4) = uVar20;
            local_bc = (float *****)&local_b8;
            local_b8 = (float *****)ppppppfVar33;
            local_b4 = (float *****)ppppppfVar33;
            local_b0 = (float *****)ppppppfVar33;
            pfVar13 = (float *)func_00520FC0();
            func_00115C70((float *)local_bc,pfVar13,(float *)(iVar26 + 4));
            uVar17 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
            iVar12 = albw_atan2_inline(ALBW_AS_F32(local_b0),ALBW_AS_F32(local_b8));   /* inlined atan2Idx (atan2_inline_fix) */
            *(int *)(iVar25 + iVar24 * 0x104 + 0xd0) = iVar12;
          }
          if (*(char *)((int)local_54 + 0x49) == '\0') goto LAB_0023704c;
          if (local_c8 == (undefined4 *)&DAT_00000011) {
            iVar12 = *(int *)(iVar25 + iVar24 * 0x104 + 0x84);
            ppppppfVar29 = ppppppfVar33;
            if (*(char *)(iVar12 + 0x20) == '\x03') {
              if ((*DAT_00236df8 != 0) &&
                 (iVar12 = func_0052FBA0(*DAT_00236df8 + 0x3dbbc,*(uint *)(iVar12 + 4)), iVar12 != 0
                 )) {
                fVar30 = *(float *)(iVar12 + 0x3dc) * *(float *)(iVar12 + 0x3dc) +
                         *(float *)(iVar12 + 0x3e0) * *(float *)(iVar12 + 0x3e0) +
                         *(float *)(iVar12 + 0x3e4) * *(float *)(iVar12 + 0x3e4);
                goto LAB_002369fc;
              }
            }
            else {
              bVar8 = func_00521098((undefined4)(uintptr_t)(param_1),(int *)(iVar12 + 4));
              if (bVar8) {
                pfVar13 = *(float **)(*DAT_00236234 + 0x20);
                fVar30 = *pfVar13 * *pfVar13 + pfVar13[1] * pfVar13[1] + pfVar13[2] * pfVar13[2];
LAB_002369fc:
                ppppppfVar29 = (float ******)CF_FBITS((float)SQRT(fVar30)); /* vsqrt.f32 result kept as bits */
              }
            }
            uVar17 = in_fpscr & 0xfffffff |
                     (uint)(ALBW_AS_F32(ppppppfVar29) < ALBW_AS_F32(ppppppfVar33)) << 0x1f |
                     (uint)(ALBW_AS_F32(ppppppfVar29) == ALBW_AS_F32(ppppppfVar33)) << 0x1e;
            in_fpscr = uVar17 | (uint)(NAN(ALBW_AS_F32(ppppppfVar29)) || NAN(ALBW_AS_F32(ppppppfVar33))) << 0x1c
            ;
            bVar7 = (byte)(uVar17 >> 0x18);
            if (!(bool)(bVar7 >> 6 & 1) && bVar7 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              fparam_0 = ppppppfVar33;
              func_0010A464((undefined4 *)(&local_c8));
              local_44 = DAT_00236dd8;
              local_48 = DAT_00236ddc;
              func_004E9BEC(*DAT_00236de0,(int *)&local_48,(int)&local_c8);
              bVar8 = func_00539200((int)&local_c8);
              if (bVar8) {
                ppppppfVar29 = (float ******)CF_FBITS((ALBW_AS_F32(ppppppfVar29) * DAT_00236de4));
                uVar17 = in_fpscr & 0xfffffff;
                in_fpscr = uVar17 | (uint)(ALBW_AS_F32(fparam_0) <= ALBW_AS_F32(ppppppfVar29)) << 0x1d;
                if ((SUB41(in_fpscr >> 0x1d,0)) &&
                   (uVar17 = uVar17 | (uint)(ALBW_AS_F32(ppppppfVar29) < ALBW_AS_F32(DAT_00236de8)) << 0x1f |
                             (uint)(ALBW_AS_F32(ppppppfVar29) == ALBW_AS_F32(DAT_00236de8)) << 0x1e,
                   in_fpscr = uVar17 | (uint)(NAN(ALBW_AS_F32(ppppppfVar29)) || NAN(ALBW_AS_F32(DAT_00236de8)))
                                       << 0x1c, bVar7 = (byte)(uVar17 >> 0x18),
                   fparam_0 = ppppppfVar29,
                   !(bool)(bVar7 >> 6 & 1) && bVar7 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
                  fparam_0 = DAT_00236de8;
                }
                func_0025B860((int)&local_c8,0,ALBW_AS_F32(fparam_0),ALBW_AS_F32(DAT_00236de8));
              }
              func_0025B874((undefined4 *)(&local_c8));
            }
            break;
          }
          goto LAB_00236aa0;
        }
        if (*(char *)((int)local_54 + 0x49) != '\0') {
LAB_00236aa0:
          iVar12 = (int)((ulonglong)((longlong)DAT_00236dec * (longlong)(int)uVar23) >> 0x20);
          if (((iVar12 >> 1) - (iVar12 >> 0x1f)) * -5 + uVar23 == param_1[0x189]) {
            iVar19 = iVar25 + iVar24 * 0x104;
            iVar21 = *(int *)(iVar19 + 0xe4);
            bVar8 = SBORROW4(iVar21,DAT_00236df0);
            iVar12 = iVar21 - DAT_00236df0;
            if (iVar21 < DAT_00236df0) {
              iVar12 = (DAT_00236df0 >> 0x15) - DAT_00236df0;
              bVar8 = SBORROW4(iVar12,iVar21);
              iVar12 = iVar12 - iVar21;
            }
            if (iVar12 < 0 != bVar8) {
              func_0034CA20(*(undefined4 **)(iVar19 + 0x84));
              iVar12 = iVar25 + iVar24 * 0x104;
              func_0014E2A0((int)param_1,*(undefined4 *)(iVar25 + iVar24 * 0x104 + 0x1c),
                            iVar12 + 0x8c,4,iVar12 + 0x9c,0);
              iVar12 = *(int *)(iVar25 + iVar24 * 0x104 + 0x84);
              if (*(char *)(iVar25 + DAT_00236df4 + iVar24 * 0x104) != '\0') {
                if ((*(char *)(iVar12 + 0x20) == '\x02') &&
                   (puVar15 = (undefined4 *)
                              func_0052FBA0(*DAT_00236df8 + 0x3dbbc,*(uint *)(iVar12 + 4)),
                   puVar15 != (undefined4 *)0x0)) {
                  local_c8 = puVar15;
                  if (((*DAT_0023726c & 1) == 0) &&
                     (iVar12 = func_00100174((int *)DAT_0023726c), iVar12 != 0)) {
                    *DAT_00237270 = DAT_00237274;
                  }
                  iVar12 = (**(code **)*local_c8)(local_c8,DAT_00237270);
                  puVar16 = (undefined4 *)0x0;
                  if (iVar12 != 0) {
                    puVar16 = puVar15;
                  }
                  if (puVar16 != (undefined4 *)0x0) {
                    uVar17 = in_fpscr & 0xfffffff;
                    in_fpscr = uVar17 | (uint)(ALBW_AS_F32(puVar16[0xf7]) == ALBW_AS_F32(ppppppfVar33)) << 0x1e;
                    bVar8 = false;
                    if (SUB41(in_fpscr >> 0x1e,0)) {
                      in_fpscr = uVar17 | (uint)(ALBW_AS_F32(puVar16[0xf9]) == ALBW_AS_F32(ppppppfVar33)) <<
                                          0x1e;
                      bVar8 = SUB41(in_fpscr >> 0x1e,0);
                    }
                    if (!bVar8) {
                      *(undefined1 *)(iVar25 + iVar24 * 0x104 + 0x100) = 1;
                      *(undefined4 *)(iVar25 + iVar24 * 0x104 + 0xe4) = DAT_00236dd4;
                      ppppppfVar29 = ppppppfVar33;
                      local_c4 = (float *****)ppppppfVar33;
                      local_c0 = (float *****)ppppppfVar33;
                      local_bc = (float *****)ppppppfVar33;
                      func_00115C70((float *)&local_c4,(float *)(puVar16 + 0xf4),
                                    (float *)(iVar26 + 4));
                      uVar17 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
                      iVar12 = albw_atan2_inline(ALBW_AS_F32(local_bc),ALBW_AS_F32(local_c4));   /* inlined atan2Idx (atan2_inline_fix) */
                      *(int *)(iVar25 + iVar24 * 0x104 + 0xd0) = iVar12;
                    }
                  }
                }
                *(undefined1 *)(iVar25 + iVar24 * 0x104 + 0x102) = 0;
              }
            }
          }
          if ((uint)param_1[0x189] < (uint)param_1[0x18a]) {
            iVar12 = param_1[0x189] + 1;
          }
          else {
            iVar12 = 0;
          }
          param_1[0x189] = iVar12;
        }
      }
LAB_0023704c:
      if (*(char *)(iVar25 + iVar24 * 0x104 + 0x100) != '\0') {
        if (uVar23 < (uint)param_1[0x18c]) {
          iVar12 = param_1[0x18d] + uVar23 * 0x104;
        }
        else {
          iVar12 = param_1[0x18d];
        }
        if (*(int *)(iVar12 + 0xe4) != 0) {
          fVar30 = (float)VectorSignedToFloat(-*(int *)(iVar12 + 0xe0),(byte)(in_fpscr >> 0x15) & 3)
          ;
          fVar30 = (float)VectorSignedToFloat((int)(fVar30 * ALBW_AS_F32(uVar35)) +
                                              *(int *)(iVar12 + 0xe4),(byte)(in_fpscr >> 0x15) & 3);
          iVar21 = (int)(fVar30 * ALBW_AS_F32(((ulonglong)uVar35 >> 0x20)));
          iVar19 = *(int *)(iVar12 + 0xe0) + iVar21;
          *(int *)(iVar12 + 0xe4) = iVar21;
          *(int *)(iVar12 + 0xdc) = iVar19;
          *(int *)(iVar12 + 0xe0) = iVar19;
        }
        bVar8 = false;
        if ((*(int *)(iVar12 + 0xd8) != *(int *)(iVar12 + 0xe0)) ||
           (uVar17 = func_0058E2B8((int *)(iVar12 + 0xd8)), DAT_00237278 < uVar17)) {
          bVar8 = true;
          func_0051D2F4((int *)(iVar12 + 0xd8),*(int *)(iVar12 + 0xe0),DAT_00236dcc >> 2,
                        DAT_00236dcc,DAT_0023727c);
        }
        if (((char)local_54[0x12] == '\0') || (*(int *)(iVar12 + 0xd4) == *(int *)(iVar12 + 0xdc)))
        {
          if ((!bVar8) && (iVar12 = iVar25 + iVar24 * 0x104, *(short *)(iVar12 + 0xcc) == 0)) {
            *(undefined1 *)(iVar12 + 0x100) = 0;
          }
        }
        else {
          func_0051D2F4((int *)(iVar12 + 0xd4),*(int *)(iVar12 + 0xdc),DAT_00236dcc,DAT_00237280,
                        DAT_00237284);
        }
        *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
        local_48 = (float *)(iVar10 + 0x80);
        func_004D8AEC(local_48,*(uint *)(iVar25 + iVar24 * 0x104 + 0xd0),(float *)(iVar26 + 4));
        func_00491E80((float *)&local_c8,*(uint *)(iVar25 + iVar24 * 0x104 + 0xd8),0,0);
        func_001157FC(local_48,local_48,(float *)&local_c8);
        iVar12 = iVar25 + iVar24 * 0x104;
        func_00491E80(afStack_98,0,
                      (*(int *)(iVar12 + 0xd4) - *(int *)(iVar12 + 0xd0)) + *(int *)(iVar26 + 0x20),
                      0);
        func_001157FC(local_48,local_48,afStack_98);
        func_004CEAF0(iVar10);
      }
    }
LAB_00237254:
    iVar24 = iVar24 + 1;
    if (iVar24 == iVar27) {
      return 0;
    }
  } while( true );
}

