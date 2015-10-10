<GameProjectFile>
  <PropertyGroup Type="Scene" Name="CardDownScene" ID="655a50ed-18b7-4130-9073-c5b17e4f131b" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="CardDownScene" FrameEvent="" CustomClassName="ManageScene" Tag="75" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="text" ActionTag="-1023750597" FrameEvent="" Tag="76" LeftMargin="184.0000" RightMargin="184.0000" TopMargin="174.0000" BottomMargin="750.0000" FontSize="100" LabelText="饭卡支出" ctype="TextObjectData">
            <Position X="384.0000" Y="800.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="400.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.7813" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="numText" ActionTag="-919522" FrameEvent="" Tag="79" RightMargin="468.0000" TopMargin="474.0000" BottomMargin="450.0000" FontSize="100" LabelText="金额：" ctype="TextObjectData">
            <Position X="0.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.4883" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="num" ActionTag="1835516021" FrameEvent="" Tag="80" LeftMargin="168.0000" TopMargin="474.0000" BottomMargin="450.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入金额" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.4883" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="ok" ActionTag="-1128405132" FrameEvent="" CallBackType="Click" CallBackName="cardDownClick" Tag="81" LeftMargin="304.0000" RightMargin="304.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" FontSize="80" ButtonText="确定" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="384.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="160.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.3906" />
            <PreSize X="0.2083" Y="0.0781" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="lunchCheck" ActionTag="1423485522" FrameEvent="" Tag="84" LeftMargin="255.0000" RightMargin="433.0000" TopMargin="284.0000" BottomMargin="660.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="295.0000" Y="700.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.3841" Y="0.6836" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="lunchText" ActionTag="1605407390" FrameEvent="" Tag="85" LeftMargin="315.0000" RightMargin="253.0000" TopMargin="274.0000" BottomMargin="650.0000" FontSize="100" LabelText="午餐" ctype="TextObjectData">
            <Position X="415.0000" Y="700.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.5404" Y="0.6836" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="dinnerCheck" ActionTag="2031037181" FrameEvent="" Tag="86" LeftMargin="510.0000" RightMargin="178.0000" TopMargin="284.0000" BottomMargin="660.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="550.0000" Y="700.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.7161" Y="0.6836" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="dinnerText" ActionTag="-926360915" FrameEvent="" Tag="87" LeftMargin="570.0000" RightMargin="-2.0000" TopMargin="274.0000" BottomMargin="650.0000" FontSize="100" LabelText="晚餐" ctype="TextObjectData">
            <Position X="670.0000" Y="700.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.8724" Y="0.6836" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="bathCheck" ActionTag="-1433914462" FrameEvent="" Tag="88" RightMargin="688.0000" TopMargin="384.0000" BottomMargin="560.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="40.0000" Y="600.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.0521" Y="0.5859" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="bathText" ActionTag="609056568" FrameEvent="" Tag="89" LeftMargin="60.0000" RightMargin="508.0000" TopMargin="374.0000" BottomMargin="550.0000" FontSize="100" LabelText="洗澡" ctype="TextObjectData">
            <Position X="160.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.2083" Y="0.5859" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="otherCheck" ActionTag="1795744665" FrameEvent="" Tag="90" LeftMargin="255.0000" RightMargin="433.0000" TopMargin="384.0000" BottomMargin="560.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="295.0000" Y="600.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.3841" Y="0.5859" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="class" ActionTag="-1186266600" FrameEvent="" Tag="38" LeftMargin="295.0000" RightMargin="73.0000" TopMargin="374.0000" BottomMargin="550.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="其他" MaxLengthText="10" ctype="TextFieldObjectData">
            <Position X="495.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="400.0000" Y="100.0000" />
            <PrePosition X="0.6445" Y="0.5859" />
            <PreSize X="0.5208" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="lendCheck" ActionTag="-193374121" FrameEvent="" Tag="84" RightMargin="688.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="40.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.0521" Y="0.3906" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="lendText" ActionTag="-702022657" FrameEvent="" Tag="85" LeftMargin="70.0000" RightMargin="598.0000" TopMargin="574.0000" BottomMargin="350.0000" FontSize="100" LabelText="借" ctype="TextObjectData">
            <Position X="120.0000" Y="400.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="100.0000" Y="100.0000" />
            <PrePosition X="0.1563" Y="0.3906" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="breakfastText" ActionTag="-1794605332" FrameEvent="" Tag="83" LeftMargin="60.0000" RightMargin="508.0000" TopMargin="274.0000" BottomMargin="650.0000" FontSize="100" LabelText="早餐" ctype="TextObjectData">
            <Position X="160.0000" Y="700.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.2083" Y="0.6836" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="breakfastCheck" ActionTag="435789674" FrameEvent="" Tag="82" RightMargin="688.0000" TopMargin="284.0000" BottomMargin="660.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="40.0000" Y="700.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.0521" Y="0.6836" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>