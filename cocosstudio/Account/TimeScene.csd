<GameProjectFile>
  <PropertyGroup Type="Scene" Name="TimeScene" ID="ef9da9ad-2013-4bd1-b334-071b8c74e4a3" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="TimeScene" FrameEvent="" CustomClassName="ManageScene" Tag="28" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="text1" ActionTag="-1491773791" FrameEvent="" Tag="61" LeftMargin="84.0000" RightMargin="84.0000" TopMargin="232.0000" BottomMargin="692.0000" FontSize="100" LabelText="今天还未记录" ctype="TextObjectData">
            <Position X="384.0000" Y="692.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.6758" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="timeText" ActionTag="-720158486" FrameEvent="" Tag="62" LeftMargin="184.0000" RightMargin="384.0000" TopMargin="312.0000" BottomMargin="612.0000" FontSize="100" LabelText="__餐" ctype="TextObjectData">
            <Position X="384.0000" Y="612.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.5977" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="text2" ActionTag="-1497788820" FrameEvent="" Tag="63" LeftMargin="384.0000" RightMargin="184.0000" TopMargin="312.0000" BottomMargin="612.0000" FontSize="100" LabelText="信息" ctype="TextObjectData">
            <Position X="384.0000" Y="612.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.5977" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="text3" ActionTag="-1022481952" FrameEvent="" Tag="64" LeftMargin="34.0000" RightMargin="34.0000" TopMargin="412.0000" BottomMargin="512.0000" FontSize="100" LabelText="是否立即添加？" ctype="TextObjectData">
            <Position X="384.0000" Y="612.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="700.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.5977" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="yes" ActionTag="173155397" FrameEvent="" CallBackType="Click" CallBackName="timeYesClick" Tag="65" LeftMargin="75.0000" RightMargin="593.0000" TopMargin="529.0000" BottomMargin="335.0000" TouchEnable="True" FontSize="80" ButtonText="是" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="175.0000" Y="495.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="100.0000" Y="160.0000" />
            <PrePosition X="0.2279" Y="0.4834" />
            <PreSize X="0.1302" Y="0.1563" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="no" ActionTag="1883483742" FrameEvent="" CallBackType="Click" CallBackName="timeNoClick" Tag="66" LeftMargin="74.0000" RightMargin="74.0000" TopMargin="724.0000" BottomMargin="220.0000" TouchEnable="True" FontSize="80" ButtonText="否" Scale9Enable="True" LeftEage="1" RightEage="1" TopEage="1" BottomEage="1" Scale9OriginX="1" Scale9OriginY="1" Scale9Width="44" Scale9Height="34" ctype="ButtonObjectData">
            <Position X="384.0000" Y="300.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="620.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.2930" />
            <PreSize X="0.8073" Y="0.0781" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="cardCheck" ActionTag="-693325676" FrameEvent="" Tag="101" LeftMargin="195.0013" RightMargin="492.9987" TopMargin="524.0000" BottomMargin="420.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="235.0013" Y="460.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.3060" Y="0.4492" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="cardText" ActionTag="1047745944" FrameEvent="" Tag="102" LeftMargin="255.0000" RightMargin="313.0000" TopMargin="514.0000" BottomMargin="410.0000" FontSize="100" LabelText="饭卡" ctype="TextObjectData">
            <Position X="355.0000" Y="460.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.4622" Y="0.4492" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="cashCheck" ActionTag="1301273297" FrameEvent="" Tag="104" LeftMargin="445.0000" RightMargin="243.0000" TopMargin="524.0000" BottomMargin="420.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="485.0000" Y="460.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.6315" Y="0.4492" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="cashText" ActionTag="-1180638468" FrameEvent="" Tag="105" LeftMargin="505.0000" RightMargin="63.0000" TopMargin="514.0000" BottomMargin="410.0000" FontSize="100" LabelText="现金" ctype="TextObjectData">
            <Position X="605.0000" Y="460.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.7878" Y="0.4492" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="cyberCheck" ActionTag="639902047" FrameEvent="" Tag="106" LeftMargin="195.0000" RightMargin="493.0000" TopMargin="604.0000" BottomMargin="340.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="235.0000" Y="380.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.3060" Y="0.3711" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="cyberText" ActionTag="-426622359" FrameEvent="" Tag="107" LeftMargin="255.0000" RightMargin="313.0000" TopMargin="594.0000" BottomMargin="330.0000" FontSize="100" LabelText="网银" ctype="TextObjectData">
            <Position X="355.0000" Y="380.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.4622" Y="0.3711" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>