  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% rtP.seed_values_1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.UniformRandomNumberx_Minimum
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 100;
	
	  ;% rtP.UniformRandomNumberx_Maximum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 101;
	
	  ;% rtP.UniformRandomNumberx_Seed
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 102;
	
	  ;% rtP.UniformRandomNumbery_Minimum
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 127;
	
	  ;% rtP.UniformRandomNumbery_Maximum
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 128;
	
	  ;% rtP.UniformRandomNumbery_Seed
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 129;
	
	  ;% rtP.celldimx_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 154;
	
	  ;% rtP.celldimy_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 179;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 204;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 205;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 206;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 207;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_pfp1n5ezxj
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 208;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_a5b0eygpkp
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 209;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_mmm5abugrv
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 210;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_fwd0synzow
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 211;
	
	  ;% rtP.forceX_tableData
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 212;
	
	  ;% rtP.forceX_bp01Data
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1712;
	
	  ;% rtP.forceX_bp02Data
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1762;
	
	  ;% rtP.forceY_tableData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1792;
	
	  ;% rtP.forceY_bp01Data
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 3292;
	
	  ;% rtP.forceY_bp02Data
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 3342;
	
	  ;% rtP.WhiteNoise_Mean
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 3372;
	
	  ;% rtP.WhiteNoise_StdDev
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 3373;
	
	  ;% rtP.Output_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 3374;
	
	  ;% rtP.DataStoreMemory_InitialValue
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 3375;
	
	  ;% rtP.A_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 3425;
	
	  ;% rtP.celldim_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 3429;
	
	  ;% rtP.celldim1_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 3479;
	
	  ;% rtP.permvec_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 3529;
	
	  ;% rtP.B_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 3531;
	
	  ;% rtP.freeze_signal_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 3535;
	
	  ;% rtP.ones_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 3560;
	
	  ;% rtP.reset_signal_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 3562;
	
	  ;% rtP.mass_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 3587;
	
	  ;% rtP.zeros_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 3588;
	
	  ;% rtP.ones_Value_a523d0oiup
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 3638;
	
	  ;% rtP.mass_Value_ay4mlzeqvo
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 3640;
	
	  ;% rtP.zeros_Value_ljr13py54z
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 3641;
	
	  ;% rtP.Interactions_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 3691;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.forceX_maxIndex
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.forceY_maxIndex
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtB.aozy4iaksv
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fklh3xatdn
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 25;
	
	  ;% rtB.apwemeo1pz
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 50;
	
	  ;% rtB.ogu0vtimd4
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 75;
	
	  ;% rtB.bkxfqi0pxq
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 100;
	
	  ;% rtB.a01jyq3kex
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 150;
	
	  ;% rtB.akgj1ibwf3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 200;
	
	  ;% rtB.h0heujskh3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 250;
	
	  ;% rtB.ldr2mikqjb
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 300;
	
	  ;% rtB.bhc54zc0ex
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 350;
	
	  ;% rtB.auxnwxtfvo
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 375;
	
	  ;% rtB.jruwlwzzf4
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 425;
	
	  ;% rtB.eprwmaok5p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 429;
	
	  ;% rtB.er40lujdmg
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 479;
	
	  ;% rtB.czszrqhgbn
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 483;
	
	  ;% rtB.awprf41k1q
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 533;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.lg50ovp1y5
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.iver2udidl
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ea2wltz1rm
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.kash4ux1pw
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cfhfmokiqc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 50;
	
	  ;% rtDW.kwcy3yjcpg
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 75;
	
	  ;% rtDW.lblnmgrqpb
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 125;
	
	  ;% rtDW.kyo5azbgia
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 150;
	
	  ;% rtDW.ahvyf2z4j5
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 250;
	
	  ;% rtDW.g1dnqdyxsu
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 300;
	
	  ;% rtDW.df1mxqbe3i
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 325;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.ml3whhvhfc.LoggedData
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gdtp522pfd.LoggedData
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.afkq2ccnyz.LoggedData
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.c43cp3qtjl.LoggedData
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.nkihzgokkq
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.aordumbgtk
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 100;
	
	  ;% rtDW.iusooyak1q
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 125;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2553842150;
  targMap.checksum1 = 2116634661;
  targMap.checksum2 = 3166579562;
  targMap.checksum3 = 47765863;

