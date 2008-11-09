<?xml version='1.0' encoding='ISO-8859-1' standalone='yes' ?>
<tagfile>
  <compound kind="class">
    <name>b</name>
    <filename>classb.html</filename>
    <base>HtmlTag</base>
  </compound>
  <compound kind="class">
    <name>CGIApp</name>
    <filename>classCGIApp.html</filename>
    <member kind="typedef">
      <type>void(CGIApp::*</type>
      <name>callback</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>415ef96deba764d9353ae05548f0163d</anchor>
      <arglist>)(void)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getSegmentCount</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>997ed3bd9e2be736e1ba16e24f48e5f5</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setRoute</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>cade0baf4a1463d6c162d782211fca57</anchor>
      <arglist>(const string &amp;urlpath, callback fn)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>routeExists</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>da3364dd58834ffe4a1cb431c692ab22</anchor>
      <arglist>(const string &amp;urlPath) const </arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>removeRoute</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>302c39463ab050d38816e084b18c2e1b</anchor>
      <arglist>(const string &amp;urlPath)</arglist>
    </member>
    <member kind="function">
      <type>Var</type>
      <name>segment</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>d42378733ebb1e1d95bcce3ff69b8a1c</anchor>
      <arglist>(unsigned int n, bool concat=false, bool fromRoot=false) const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CGIApp</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>6cbff2dc921e226e7bae002e0e9bbf7d</anchor>
      <arglist>(CGILayout *l)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>start</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>d94e9010ba20af8e820783749e8f7cc8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>init</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>b795cf55e9a7cfc91a53343f776da218</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="pure">
      <type>virtual void</type>
      <name>subMain</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>cf296ca22725ff695c3dfea628fa3803</anchor>
      <arglist>()=0</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>destroy</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>55dde1c3f93ad6654a4c236e0d3129b7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stop</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>9d7d937724bafb58dfb455411c8b5e86</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>exec</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>5cfe98f6c3cb3534b96f7fd5159a05d1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setLayout</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>df70bb53c6547674c1cf5f137bac33b1</anchor>
      <arglist>(CGILayout *l)</arglist>
    </member>
    <member kind="variable">
      <type>Session</type>
      <name>session</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>a0557786630070e8d5f6e52a41eb8c3d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>Request</type>
      <name>request</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>9236be29e3ee77ce8e3abe1099bc1b08</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>HttpHeader</type>
      <name>header</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>9967505c639f07b5f122a3831a7a8c0d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>auto_ptr&lt; CGILayout &gt;</type>
      <name>layout</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>af939e485f16fb76dc6afda69c0219c9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>stringstream</type>
      <name>res</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>4a8d9bb9b6b1fb94d023b29b2ac869ca</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef" protection="private">
      <type>map&lt; std::string, callback &gt;</type>
      <name>callbackMap</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>ea9874942a00dad0159a4ace1b06e37f</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type>bool</type>
      <name>callRoute</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>c55aa3b6261d78713936889d6ac0b1d5</anchor>
      <arglist>(const string &amp;urlPath)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>string</type>
      <name>detectRoute</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>793863dd291caad8ad02001434a9b0ff</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>mSegment</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>9c25b08bb6ee94f975242bc4acf1ae5d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>int</type>
      <name>segmentCount</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>49d029886ad20e0793aa04d5806115c5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>callbackMap</type>
      <name>clbk</name>
      <anchorfile>classCGIApp.html</anchorfile>
      <anchor>f7ff7224f4b7571b1e2370e3ec3db849</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CGIException</name>
    <filename>classCGIException.html</filename>
    <member kind="function">
      <type></type>
      <name>CGIException</name>
      <anchorfile>classCGIException.html</anchorfile>
      <anchor>f53d72a8212748d248149d52e0bdce37</anchor>
      <arglist>(const string &amp;errMsg)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CGIException</name>
      <anchorfile>classCGIException.html</anchorfile>
      <anchor>cb06b9baf52d90d4af08ebe9f45a89eb</anchor>
      <arglist>(const string &amp;from, const string &amp;errStr)</arglist>
    </member>
    <member kind="function">
      <type>const string &amp;</type>
      <name>getMsg</name>
      <anchorfile>classCGIException.html</anchorfile>
      <anchor>a23e3d6c37bdb51e61ef3a0a9f37a96f</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>mErrMsg</name>
      <anchorfile>classCGIException.html</anchorfile>
      <anchor>140051f4ca5601941ec7be922da06d1c</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>classCGIException.html</anchorfile>
      <anchor>83dbc37442acdd6c18caa70a82be95e1</anchor>
      <arglist>(ostream &amp;o, CGIException &amp;ex)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CGILayout</name>
    <filename>classCGILayout.html</filename>
    <member kind="function">
      <type>CGILayout &amp;</type>
      <name>operator=</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>c5bd73276fedd502cf3867b8151cade9</anchor>
      <arglist>(const CGILayout &amp;l)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CGILayout</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>b059968bd99bd649d2ac56d73a959119</anchor>
      <arglist>(const CGILayout &amp;l)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addParam</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>6ad5855339cd0b5d11c2529e098d9318</anchor>
      <arglist>(const string &amp;key, const string &amp;val)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setParam</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>9cf8e286bb4192ef383f3c64f5689f0e</anchor>
      <arglist>(const string &amp;key, const string &amp;val)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeParams</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>e7403053e136c59c254a9f3378955073</anchor>
      <arglist>(const string &amp;key)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTitle</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>75332461392d86dea747caa244da583c</anchor>
      <arglist>(const string &amp;title)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setBody</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>18ae9f151e6e6c5603a24af24d2d9bea</anchor>
      <arglist>(const stringstream &amp;content)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addJavaScript</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>a00ddbb5c9f0a1bdfa7ef2dcd0b02f5a</anchor>
      <arglist>(const string &amp;jsFileName)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addStyleSheet</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>c6439bbf4dff84cd53d8f64af72f9c60</anchor>
      <arglist>(const string &amp;cssFileName)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addMeta</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>5bb0e152e9bdba636bf45c279646f1fe</anchor>
      <arglist>(const string &amp;metaData)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>layout</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>1715d991cc1d1bc3fe997fd63df9ea2d</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>string</type>
      <name>getTitle</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>ceefb16d8a21fda1ea88463d4f19a081</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>const stringstream &amp;</type>
      <name>getObStream</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>6b074c717d707283cec5b38e59ba3be1</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable">
      <type>stringstream</type>
      <name>js</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>033c41fe758e78d0f185f398f9ba48af</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>stringstream</type>
      <name>css</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>c6b8de6c57be3dc52e1689d5828430fb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>CSSBuilder</type>
      <name>cssBldr</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>53ee20645aa48b21f0bbeb90422a6e07</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef" protection="protected">
      <type>multimap&lt; string, string &gt;</type>
      <name>layoutParamsMap</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>a8e4c0ba8f2d4ffd61d23113d79ac10e</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>printMeta</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>7a29bfc1454394426d336a36dbc793f3</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>printJs</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>845949a079eb1d4edaa73e1cef2f437f</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>printCss</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>82fa8c3fbf3e07779780dcb522fb6da8</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>stringstream</type>
      <name>mBody</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>06a766aacec0eab649552bf3c56957b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>stringstream</type>
      <name>res</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>ba13cd890ab3133f2c4c97a714cc3be0</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>layoutParamsMap</type>
      <name>mParams</name>
      <anchorfile>classCGILayout.html</anchorfile>
      <anchor>9584075749fd10732c6b6175161bc0f5</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CSSBuilder</name>
    <filename>classCSSBuilder.html</filename>
    <member kind="function">
      <type></type>
      <name>CSSBuilder</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>2cae5b583d2836b807c99a14162a6e0e</anchor>
      <arglist>(stringstream &amp;cssStream)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>commit</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>41e4f53240e3228d9a92624b741c7e80</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isCommited</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>8eead6b9f540489779551e58c4fc7cfb</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>makeSelector</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>e69c7317c5e156c0f7f24a16aa245c94</anchor>
      <arglist>(const string &amp;selectorName)</arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>copyFromSelector</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>fffd03b91b94967051e3e32c65acfa9e</anchor>
      <arglist>(const string &amp;selectorName)</arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>addToSelector</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>35c3c052df6a056548b68a18a640d6f9</anchor>
      <arglist>(const string &amp;selectorName)</arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>getSelector</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>f071ef4291e8904e54dfa275030bceb2</anchor>
      <arglist>(const string &amp;selectorName)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>selectorExists</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>715935f04ef19c2c4052cba8d3f1ad40</anchor>
      <arglist>(const string &amp;selectorName) const </arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>removeSelector</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>767d82eea0738eb529235b4ff3c9fd1e</anchor>
      <arglist>(const string &amp;selectorName)</arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>addRule</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>0e4ab0b778724c554fa85d367c74e720</anchor>
      <arglist>(const string &amp;key, const string &amp;val)</arglist>
    </member>
    <member kind="function">
      <type>string</type>
      <name>getRule</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>9958d563db840d93dff2669b55b364c0</anchor>
      <arglist>(const string &amp;key) const </arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>ruleExists</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>a37966d8b5e4cb2c7312792dabd468b3</anchor>
      <arglist>(const string &amp;key) const </arglist>
    </member>
    <member kind="function">
      <type>CSSBuilder &amp;</type>
      <name>removeRule</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>b06a8ce4966ea4d43971753cf3a5e9dd</anchor>
      <arglist>(const string &amp;key)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>end</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>54ba3e8cde28bd83cd826bb264501b87</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>operator++</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>cdd12d3ce197adf9354c52e0dfaae4d3</anchor>
      <arglist>(int)</arglist>
    </member>
    <member kind="typedef" protection="private">
      <type>map&lt; string, string &gt;</type>
      <name>RuleSet</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>4ae6d912f49b0b2d89a83f6574d69a57</anchor>
      <arglist></arglist>
    </member>
    <member kind="typedef" protection="private">
      <type>map&lt; string, RuleSet &gt;</type>
      <name>CSSStruct</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>b89735abdf268ad33ca0200289093b50</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>RuleSet</type>
      <name>ruleSetHolder</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>6605aac415cdde64fdb9e5a31e461c41</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>CSSStruct</type>
      <name>cssStruct</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>2ef417273221c02d7da1809c9f23d35d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>stringstream &amp;</type>
      <name>css</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>dd9e1d740af527878f61460c81df0a6e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>bool</type>
      <name>commited</name>
      <anchorfile>classCSSBuilder.html</anchorfile>
      <anchor>e1fc8d817ebaad1fcfbf9f386fd305c9</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>File</name>
    <filename>classFile.html</filename>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>isReadable</name>
      <anchorfile>classFile.html</anchorfile>
      <anchor>80141e65f2761fb4c5871abfb046619b</anchor>
      <arglist>(const string &amp;fileName)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>exists</name>
      <anchorfile>classFile.html</anchorfile>
      <anchor>45b31575ed19b9816fbd2455a86c3912</anchor>
      <arglist>(const string &amp;fileName)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>isWritable</name>
      <anchorfile>classFile.html</anchorfile>
      <anchor>64a151cc37ac28be36c1b621972f70c7</anchor>
      <arglist>(const string &amp;fileName)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>createEmptyFile</name>
      <anchorfile>classFile.html</anchorfile>
      <anchor>c3ce9aefc7408f7d1d966385ef6153c7</anchor>
      <arglist>(const string &amp;fileName)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static StringList</type>
      <name>splitLines</name>
      <anchorfile>classFile.html</anchorfile>
      <anchor>4145ceaeac066c1796854ff492c5147d</anchor>
      <arglist>(const string &amp;fileName)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>HtmlTag</name>
    <filename>classHtmlTag.html</filename>
    <member kind="function">
      <type></type>
      <name>HtmlTag</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>62eb3105ee2592c4564cba840bf5dffb</anchor>
      <arglist>(bool tagType=TAG_PAIR)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>HtmlTag</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>0076758379d841b014185a0baf664ba2</anchor>
      <arglist>(const string &amp;tagName, bool tagType=TAG_PAIR)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTagName</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>b175e70bde14ba15d160c7361fc08cde</anchor>
      <arglist>(const string &amp;tagName)</arglist>
    </member>
    <member kind="function">
      <type>const string &amp;</type>
      <name>getTagName</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>46a1b30ccc0ee7e2a2942dd0d42b5a46</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual HtmlTag &amp;</type>
      <name>setAttr</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>6a1edcd9d1b0e3c3fab774f6874feb50</anchor>
      <arglist>(const string &amp;key, const Var &amp;val)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual Var</type>
      <name>getAttr</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>ab12ea73f5395b06873fc0d65b008a9f</anchor>
      <arglist>(const string &amp;key) const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual HtmlTag &amp;</type>
      <name>removeAttr</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>dbb6d35fc0e7ea11a8e9b850884a4fa7</anchor>
      <arglist>(const string &amp;key)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual HtmlTag &amp;</type>
      <name>setId</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>3fadb90a3435758cebad17dd6c4e2d7a</anchor>
      <arglist>(const Var &amp;val)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual HtmlTag &amp;</type>
      <name>setClass</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>7a6a5a4479f7e67f0796e3bc7c67b4d9</anchor>
      <arglist>(const Var &amp;val)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual HtmlTag &amp;</type>
      <name>setName</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>43f09e229a49a26bb54425d84339c5c9</anchor>
      <arglist>(const Var &amp;val)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual Var</type>
      <name>getId</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>1698a6303bda5226627b0291c1da7b27</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual Var</type>
      <name>getClass</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>6852dbba1ff504500796eb22f67d25b2</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual Var</type>
      <name>getName</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>c1d2797c8240cfed348d942bb5928a28</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual string</type>
      <name>open</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>c259f32d68385a8fe05b45211ac22a9e</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual string</type>
      <name>close</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>39c5f9b8f582fb4e3e502c3556ef63e5</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>string</type>
      <name>autoComplete</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>de0a8b993d7dae6ed9b394c2307cf817</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable">
      <type>char</type>
      <name>quoteType</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>997be48566824cbb7dfe293c684406e6</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual string</type>
      <name>makeAttr</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>0e2c807c620d5036e1075271a0b8c440</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="private">
      <type>bool</type>
      <name>mTagType</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>0f613e3d7d43595fa69175ac9a966b13</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>mTagName</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>9d633cde7073067759c261135fb592da</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>ParamsMap</type>
      <name>mAttr</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>895fa5e2b887e674df0710259dd83b56</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>classHtmlTag.html</anchorfile>
      <anchor>378170d98d050945592ea3afc7adb9f0</anchor>
      <arglist>(ostream &amp;o, const HtmlTag &amp;t)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>HtmlTagAutoCompleter</name>
    <filename>classHtmlTagAutoCompleter.html</filename>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>detectStatus</name>
      <anchorfile>classHtmlTagAutoCompleter.html</anchorfile>
      <anchor>d31605fa8bf1d1bb3163a17d121d3ee9</anchor>
      <arglist>(const string &amp;tagName)</arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static stack&lt; string &gt;</type>
      <name>tstk</name>
      <anchorfile>classHtmlTagAutoCompleter.html</anchorfile>
      <anchor>ea0c02eb0d947e4baf9880566e79f958</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>HttpHeader</name>
    <filename>classHttpHeader.html</filename>
    <member kind="function">
      <type></type>
      <name>HttpHeader</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>3b5ac8cf8cbf047d17a29bed9ad81c4d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addHeader</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>3fcbac375fff89e1a32fadf19f0e5bdf</anchor>
      <arglist>(const string &amp;)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addHeader</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>f6bec0fb046bf58a54ae4dc2089e5e42</anchor>
      <arglist>(const string &amp;, const string &amp;)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>commit</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>772318e75967f72837d37ccc285669ce</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isCommited</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>26efee956ff58117816c234424bb269f</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="private">
      <type>bool</type>
      <name>commited</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>65e4eab55ae8507dbb3f51b3201e47a9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>StringList</type>
      <name>headersList</name>
      <anchorfile>classHttpHeader.html</anchorfile>
      <anchor>0c50ab7e0e530e80c733cdf876050c60</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ParamsMap</name>
    <filename>classParamsMap.html</filename>
    <base>ParamsMapCore&lt; string, Var &gt;</base>
  </compound>
  <compound kind="class">
    <name>ParamsMapCore</name>
    <filename>classParamsMapCore.html</filename>
    <templarg>KeyType</templarg>
    <templarg>ValueType</templarg>
    <member kind="function">
      <type>bool</type>
      <name>exists</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>0fb2a382ee9842a5d55fdae04714d295</anchor>
      <arglist>(const KeyType &amp;key) const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual ValueType</type>
      <name>get</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>6611cce745de15689e0581166dc4d77e</anchor>
      <arglist>(const KeyType &amp;key) const </arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>set</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>9d3efca80d0911e64239439f0a29c032</anchor>
      <arglist>(const KeyType &amp;key, const ValueType &amp;val)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>remove</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>ced22fd45f927f69867de46cce5978d2</anchor>
      <arglist>(const KeyType &amp;key)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeAll</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>e927ec4fa28082d6617cb8b4849790f6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>ParamsMapCore&lt; KeyType, ValueType &gt;::iterator</type>
      <name>search</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>0d2ce1e37841651bda9d711dddbc48bf</anchor>
      <arglist>(const KeyType &amp;key)</arglist>
    </member>
    <member kind="function">
      <type>ParamsMapCore&lt; KeyType, ValueType &gt;::const_iterator</type>
      <name>search</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>f72633d4af39406e68a23baed7926b5d</anchor>
      <arglist>(const KeyType &amp;key) const </arglist>
    </member>
    <member kind="function">
      <type>ParamsMapCore&lt; KeyType, ValueType &gt;::iterator</type>
      <name>each</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>fb91da94a9a521a5d0a17aa6f273e3e7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>ParamsMapCore&lt; KeyType, ValueType &gt;::const_iterator</type>
      <name>each</name>
      <anchorfile>classParamsMapCore.html</anchorfile>
      <anchor>93bfff73809d7ca5e1727637fd83fbff</anchor>
      <arglist>() const </arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>RawRequest</name>
    <filename>classRawRequest.html</filename>
    <member kind="function">
      <type>const char *</type>
      <name>getGatewayInterface</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>611f7e574e9327a4b28e8eaa2b0768da</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getServerSoftware</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>0fe73e3bf7f06c826f1ce0559acab613</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getServerName</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>e52072dc0f3b002d789307baf7d5b5de</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getServerProtocol</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>84419c69c2ba9f098ace6b3a7adf3bf7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getRequestMethod</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>d3b574a09ab3b6c1ae11ccf31400d2cd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getServerPort</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>2749bff43870643ed3dd0ede00a5193f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getPathInfo</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>747a33e22cdbed6cee706dbf6f7428c5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getAuthType</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>a1ff10d2be5d983ffc02e55a62399512</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getContentType</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>f0e2412413f43d0f400c1b72911bcf37</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getHttpAccept</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>f49d8635875c59424a289f92a3d75086</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getHttpUserAgent</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>5656142f10afd281f484b65daf5a56f5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getPathTranslated</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>ad970a1212174aeccfc461aba3a2b245</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getQueryString</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>ada8af8d0f00a35a55f8c30633b96af1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getRemoteAddr</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>bd82dafc5a3efe788e268f54a379b6e5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getRemoteHost</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>fc6f560a044e651a4b3518173a395c06</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getRemoteIdent</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>2d50d93b2537dd3997f51406eb95c630</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getRemoteUser</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>f40681cfa92a731ed3d4e99cf898484c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getScriptName</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>1063865b22136eb84b9f50b49d6b58f0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>getContentLength</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>1e4033850288b7aae27da893e98c35ff</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>serverSoftware</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>5882cca487fab9ea9e5a5080615a91fe</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>serverName</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>400bcd9ca74ca19a6099dbe44485c0ec</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>gatewayInterface</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>0b078d2100685a1eff636bf451108475</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>serverProtocol</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>101587a4e16537c759874c02cfb835ce</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>serverPort</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>a76c2bcb5ed1ea9340a3c4f467434b3a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>requestMethod</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>381657a90598626b650d299435ccc2fe</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>pathInfo</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>fcee8dfa43a28b2fda1aad9793391349</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>pathTranslated</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>d88d08f7041b4b4667f7173fa30f89ce</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>scriptName</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>8b3b50077361fe8038857941b4c60941</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>queryString</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>be27f24c3f50f2bfa5b2501f5c7bbc3e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>remoteHost</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>652bc46690f5eaf659d3dfbe718261a6</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>remoteAddr</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>409dd05e1aaf7542c07a5e72713cbc2b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>authType</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>19b3418081262722d3dc88eba8ea88b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>remoteUser</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>90c2ae337f995ccf05b40e937ba7ed70</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>remoteIdent</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>7387ab901307383a5751aa9cfa09322f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>contentType</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>eef499890cd154a6c75196c66ebfc2d1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>contentLength</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>3e554bfa7db98bea230359f72cacc5b9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>httpAccept</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>eeac196e4a474a89f92250b58cc612fa</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const char *</type>
      <name>httpUserAgent</name>
      <anchorfile>classRawRequest.html</anchorfile>
      <anchor>7bd2530ef32a095ad6c06f9e780636cf</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Request</name>
    <filename>classRequest.html</filename>
    <base>RawRequest</base>
    <member kind="function">
      <type></type>
      <name>Request</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>d02e928da3f50e3cc6d61150642d7692</anchor>
      <arglist>(HttpHeader &amp;headerRefObj)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isGet</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>b3092df34b61f0cb2f5c171464fb152f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isPost</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>c5ad4e6746d7b63753a3b0cf242d2939</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCookie</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>4f58d62030fbe7a46d8251b9f2212820</anchor>
      <arglist>(const string &amp;key, const Var &amp;val, const string &amp;domain=&quot;&quot;, const string &amp;path=&quot;/&quot;, const time_t &amp;exp=0x0)</arglist>
    </member>
    <member kind="variable">
      <type>ParamsMap</type>
      <name>get</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>493e8a734c6ac6c8074a89374f9009ea</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>ParamsMap</type>
      <name>post</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>dcfec9fe88e053a1d550aa7df0d91e53</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>ParamsMap</type>
      <name>cookie</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>8cff9a564cdba76ad265c796788317a8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>StringList</type>
      <name>pathInfo</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>2258f75b55fcea9dc1a0d5dc35e7131b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static const std::string</type>
      <name>weekDays</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>4b1c07094632856edbb5c3d30b8e2486</anchor>
      <arglist>[7]</arglist>
    </member>
    <member kind="function" protection="private">
      <type>ParamsMap</type>
      <name>__params</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>9c8fea0e50e6be190992d025a75c9712</anchor>
      <arglist>(const char *rawQuery, char sep=&apos;&amp;&apos;)</arglist>
    </member>
    <member kind="function" protection="private">
      <type>ParamsMap</type>
      <name>__getParams</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>74c904870bad1aced285f574eecc6a87</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>ParamsMap</type>
      <name>__postParams</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>3fbcb87b57b4b2dba9ae8b9e4b41c5b0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>ParamsMap</type>
      <name>__cookieParams</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>471dbd9037907b6292370caa2754cdb7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>HttpHeader &amp;</type>
      <name>headerRef</name>
      <anchorfile>classRequest.html</anchorfile>
      <anchor>6081c76174ca3233c917a1a62aa5dc80</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Session</name>
    <filename>classSession.html</filename>
    <member kind="function">
      <type></type>
      <name>Session</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>bed10983b0d32a61bb7754eaff342e3d</anchor>
      <arglist>(Request &amp;req)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Session</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>1d658492788217c7d199e2b636c57264</anchor>
      <arglist>(Request &amp;req, const string &amp;)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setRequestHandle</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>6cd7e9f8b2c63b8638a367bf2c544382</anchor>
      <arglist>(Request &amp;)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>start</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>47baf956cead0046fcbac45c572c70d3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>commit</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>513ec9f06c9774e5095a0ceb0f20bd7a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const string &amp;</type>
      <name>getSessPath</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>835ab2b8c185a5ac93881581cb5cb360</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setSessPath</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>8760d388b1d90291be17dbd162e6eba3</anchor>
      <arglist>(const string &amp;path)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>add</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>5fb598d46ffff4dd303230d5d4329fce</anchor>
      <arglist>(const string &amp;, const Var &amp;)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>exists</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>c183a526410481bacc81ba48771eb6f2</anchor>
      <arglist>(const string &amp;)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>remove</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>e538023eb99c72dd6a86405d7627a05f</anchor>
      <arglist>(const string &amp;)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>modify</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>656e0f7bae0d39166c80e578baa14935</anchor>
      <arglist>(const string &amp;, const Var &amp;)</arglist>
    </member>
    <member kind="function">
      <type>const Var</type>
      <name>get</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>9cee8692bb3f22d4ab1d97f424bbbf28</anchor>
      <arglist>(const string &amp;) const </arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>sessionIdProvided</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>b24201b878b2af6592e80db577b43503</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>Var</type>
      <name>getSessionId</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>e5e6b48af87faa353c4b4b4cecf382f6</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>set</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>3f1e69909718368842652c060a67e6e7</anchor>
      <arglist>(const string &amp;key, const Var &amp;val)</arglist>
    </member>
    <member kind="variable">
      <type>sessionCookieParams</type>
      <name>cookieParams</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>8c519734d64bd395fc5c47535a10e074</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>ParamsMap</type>
      <name>item</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>2f67fe84547280234c0f2ceb3b3daa5f</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="private">
      <type>string</type>
      <name>createEmptySessionFile</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>624d15e7efa8808de91485ddd37bfe3e</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" protection="private">
      <type>string</type>
      <name>fullSessionPath</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>3a36a232a5ada8ef68b7aa272a980368</anchor>
      <arglist>(const string &amp;sessId) const </arglist>
    </member>
    <member kind="function" protection="private">
      <type>ParamsMap</type>
      <name>readSessionData</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>0558dc3e4bb546c7f61c16161480413e</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>dumpSessionData</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>434b31f18e6c36b0b37e846d45378389</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>Request &amp;</type>
      <name>requestRef</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>9cd3e99945f7d8f66dc1e3de62340a84</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>sessPath</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>a8dcecd77995032fc6f62c07094792ec</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>id</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>67959ca0be9ea178856377f310406598</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>name</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>a0f52e870f6919cae73a6dfa6b5c823b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>sessFileName</name>
      <anchorfile>classSession.html</anchorfile>
      <anchor>38e2c04237ea64cb13d38be00915fc33</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>SessionConfig</name>
    <filename>classSessionConfig.html</filename>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>isHttpOnly</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>79cc3d0597e57923990c3052d292cf9d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>isSecure</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>ab079957299649b61a68d78d7038329c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>isAutoStarted</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>82216f8f91f34bbc4971ff00239bdfe7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static const long &amp;</type>
      <name>getLifetime</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>860565999c16255c14e5296fc990f2d1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static const string &amp;</type>
      <name>getDomain</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>aba17c677d505fbeb6a2a55989594d00</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static const string &amp;</type>
      <name>getName</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>ba3102f1deaff5195348e57dc48bcddc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static const string &amp;</type>
      <name>getPath</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>d18b9f143ef99813571990391e12dec5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static const string &amp;</type>
      <name>getSessPath</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>2183b42392b2255a23c11491bb029339</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setSessPath</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>452c41d342c1b53acbab4131bcb686a0</anchor>
      <arglist>(const string &amp;path)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setPath</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>0ec857be3dcd6de8fb4ae7a82f5d6a1b</anchor>
      <arglist>(const string &amp;p)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setName</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>17db64d863fa4389aaec1a5121c7d89a</anchor>
      <arglist>(const string &amp;n)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setDomain</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>0ea2a6b4362105d74e9d765cd8b4457c</anchor>
      <arglist>(const string &amp;d)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setLifeTime</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>54650fdb372ecb1323a5d430ce70a8c5</anchor>
      <arglist>(const long &amp;l)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setSecure</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>aff72285225a93d99bca28637e515273</anchor>
      <arglist>(bool secureStatus)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setHttpOnly</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>5eaaef483af61f2ea9c3ad29a10add08</anchor>
      <arglist>(bool httpOnlyStatus)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setAutoStart</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>515931a690e079dee7cbd9fa89562c04</anchor>
      <arglist>(bool autoStartStatus)</arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static string</type>
      <name>sessPath</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>7229f84e99aba263477936360200f353</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static string</type>
      <name>path</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>5309d680dc0211446f0cbb8c671217e5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static string</type>
      <name>name</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>6f05cf6c84d4d31b6e424ab5991876b5</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static bool</type>
      <name>secure</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>9db25c20a5cd170c169d8e201594e797</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static bool</type>
      <name>httpOnly</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>ccad530c93a443aa951da00116ea6133</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static long</type>
      <name>lifeTime</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>3e34ea9368441fc1f356b1f91373adb7</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static string</type>
      <name>domain</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>5f3a5e04dd36008eac09928befec6efa</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static bool</type>
      <name>autoStart</name>
      <anchorfile>classSessionConfig.html</anchorfile>
      <anchor>657604c0ca85eb000a55ea34b70138cf</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>sessionCookieParams</name>
    <filename>classsessionCookieParams.html</filename>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>secure</name>
      <anchorfile>classsessionCookieParams.html</anchorfile>
      <anchor>25ce9671455b3907acb39326f3a2443c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const string &amp;</type>
      <name>domain</name>
      <anchorfile>classsessionCookieParams.html</anchorfile>
      <anchor>9820667431b4c94b8911a9c30ecf879d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const string &amp;</type>
      <name>path</name>
      <anchorfile>classsessionCookieParams.html</anchorfile>
      <anchor>955bf23ca54051996c3c21f0be2834a1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>httpOnly</name>
      <anchorfile>classsessionCookieParams.html</anchorfile>
      <anchor>c335ebb63e71856e6f9b7fe01f9f8cf4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>unsigned long</type>
      <name>lifeTime</name>
      <anchorfile>classsessionCookieParams.html</anchorfile>
      <anchor>42013d729a3325abde406f2e05342417</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>StringList</name>
    <filename>classStringList.html</filename>
    <member kind="function">
      <type>StringList::iterator</type>
      <name>each</name>
      <anchorfile>classStringList.html</anchorfile>
      <anchor>efefd2584f7b22d9fe896f6aacb4c0d4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>StringList::const_iterator</type>
      <name>each</name>
      <anchorfile>classStringList.html</anchorfile>
      <anchor>3c607062896de566f918b3c5480dd8ac</anchor>
      <arglist>() const </arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Var</name>
    <filename>classVar.html</filename>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4bb1b12f7b8431c7d36e74216c9d0717</anchor>
      <arglist>(const int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>12b078f76009965c5d5c80ca806983ef</anchor>
      <arglist>(const unsigned int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>31d73e7f641896e16d57e3ef01cd3ea4</anchor>
      <arglist>(const short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>581eef061e50fe7f0f648b8de5fcb699</anchor>
      <arglist>(const unsigned short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>95be0effe332f9e713d59e8bbc604958</anchor>
      <arglist>(const long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7862de46a2c0bef16f71bb3e82bf6692</anchor>
      <arglist>(const unsigned long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>0035f89e37efb4ae17c12453e44b81b2</anchor>
      <arglist>(const float r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7de3db4816bdd14810b6426504a66c07</anchor>
      <arglist>(const double r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>03b89deb763b3c76afa6457ecae5d14b</anchor>
      <arglist>(const char r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>19ff4000945a208475b604cf21fd23be</anchor>
      <arglist>(const char *r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator+=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>543095449a0f529305da7de9df78905d</anchor>
      <arglist>(const string &amp;r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>382ee06269eb99897eb1fe7b067575ad</anchor>
      <arglist>(const int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>410d018e99772280a94deb0c85f5330e</anchor>
      <arglist>(const unsigned int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>8294fc348d32d71641911b7deac542a2</anchor>
      <arglist>(const short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ef605a3b98d7febea584aaf81e0b3903</anchor>
      <arglist>(const unsigned short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7b248e807849b1ed97f7c08d529c46ce</anchor>
      <arglist>(const long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>bfbd07cfcdd0498e06fb4ce4e5732d23</anchor>
      <arglist>(const unsigned long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>c6d15d50d55a4cdb0ee35887caf10455</anchor>
      <arglist>(const float r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator-=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>494194face36950b73461ac8d47e1b05</anchor>
      <arglist>(const double r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d655335684c472a236c8c67a379094d5</anchor>
      <arglist>(const int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>a14b6b2e99d98995acdeb20ba61eb6b9</anchor>
      <arglist>(const unsigned int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>cb3c458d7659a58f83b48b4a59e48e14</anchor>
      <arglist>(const short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>be4001dba23630ef0712b24e612d9d4f</anchor>
      <arglist>(const unsigned short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>e41f41a5977f457fbdb2fe4133ed2397</anchor>
      <arglist>(const long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>dda1593624bf331db944a0a81e152750</anchor>
      <arglist>(const unsigned long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>0175d9191ad7cb0dbc34dc0ffdaf8e32</anchor>
      <arglist>(const float r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator*=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5910b0b92187e3c78a2d49dc622b9a6c</anchor>
      <arglist>(const double r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>c63be27f3de4c4fe6b0c9e3bab91acca</anchor>
      <arglist>(const int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>488d18235ef01a5f2e61b43f7dce35c6</anchor>
      <arglist>(const unsigned int r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>b02ce884f553cd6c7bb88af8a0483213</anchor>
      <arglist>(const short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>f9640fe881fc4ba52db75c4f052060a4</anchor>
      <arglist>(const unsigned short r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>1ac4544a432386b94f23ab7c23e811b8</anchor>
      <arglist>(const long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>debf5a66db6616c14f0ad38018941609</anchor>
      <arglist>(const unsigned long r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>62a0df010f34125f7b91763b64a262d0</anchor>
      <arglist>(const float r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator/=</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>e4c8a2a99853f502becc2eed4f597f5a</anchor>
      <arglist>(const double r)</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator++</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>b5a22d57926e2f433c2e9548485f8ea7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const Var &amp;</type>
      <name>operator--</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>36b15e3d265ce507d72ad7f1a5b1415d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>2454843f8e59c8275dc4bf317bd83107</anchor>
      <arglist>(const Var &amp;src)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>54b7b0c0eaea765b9ab5d4589f7e882d</anchor>
      <arglist>(const char *val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>802b20b083f5a93b334275d90feda6f9</anchor>
      <arglist>(const double val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>9ff95566445dfb743b663dbe671d8c0a</anchor>
      <arglist>(const float val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ee9a4bd8d00e470de418d0a859418713</anchor>
      <arglist>(const int val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d3167f908e6e8a355fab012cdcbef279</anchor>
      <arglist>(const short val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>cc94780272e98b0775418f72a0d3cbe2</anchor>
      <arglist>(const long val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>373f48cfb3c0c184126ee0858b8f1ef5</anchor>
      <arglist>(const string &amp;val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7920f605b896012cdde5aaaf4183f798</anchor>
      <arglist>(const char val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>f7c9c5ffe3ba997d2d6f1799bc9caf81</anchor>
      <arglist>(const unsigned int val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>9bc36aaa458c72c026d55f4e9720bffa</anchor>
      <arglist>(const unsigned long val)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>Var</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>c242a7e6016df8215cd09f925b2e95e0</anchor>
      <arglist>(const unsigned short val)</arglist>
    </member>
    <member kind="function">
      <type>const char *</type>
      <name>data</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>cfb3b27d9a90b2278068c4c0616a7030</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setData</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d4ba277b09977dff02bfd967213b986b</anchor>
      <arglist>(const char *data)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setData</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>19445862eb8d0a6ce594326754492548</anchor>
      <arglist>(const Var &amp;val)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>size</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5128ee4ca9b4e868dff3724562413823</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>const string &amp;</type>
      <name>toString</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5ceac5f71482331f8d76135e94b7236b</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>toLong</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4b8ab77896158a56ba93d6c01e8d5589</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>toInt</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>a9f4bb634a37cea60419ffa813027eae</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>toFloat</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>f3a89b2ce7659ee5c56d113ac07fb557</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>double</type>
      <name>toDouble</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>594a4b4f28b4aa725f6bf780312e187c</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type>char</type>
      <name>toChar</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>a9cf383b9c920c8bee4badefec924eb4</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator const string &amp;</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>38d7b1016c27eb68252404797773e71a</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator char</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ee48faf68598e74fb4a6be959feb6a04</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator long</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>8a7dbc82f15eb6167f097f2fed8a30d2</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator int</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>e344617a87feb27a31d82fe5753f6824</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator float</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>2ad0fb12c87741c232b74a65d402a278</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator double</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>01e64417e2ac9ba93fb52988133ab5b7</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator char *</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>061d4eddf83efaa79daa9bc8a1bcb31e</anchor>
      <arglist>() const </arglist>
    </member>
    <member kind="variable" protection="private">
      <type>string</type>
      <name>__data</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>155c960ed347bb236f5f91019d32bc25</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend ostream &amp;</type>
      <name>operator&lt;&lt;</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4e11abfa7ef2661cb2d8d3122aa72520</anchor>
      <arglist>(ostream &amp;, const Var &amp;)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>82df12b1a94c2bfad03f945470c56ffd</anchor>
      <arglist>(const Var &amp;l, const int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>fd1602a96ba16d51bbabfc1790d280cf</anchor>
      <arglist>(const Var &amp;l, const unsigned int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>85aebdea490c1ebdc494a6b8a0ffc223</anchor>
      <arglist>(const Var &amp;l, const short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>eb6bc49cd9e1ace436ce0d0779ce9cc9</anchor>
      <arglist>(const Var &amp;l, const unsigned short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>b2b15879da0782d15c1527f38917e510</anchor>
      <arglist>(const Var &amp;l, const long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>28a32c2d210b53b168d3f1bc324d7299</anchor>
      <arglist>(const Var &amp;l, const unsigned long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>f2d950dec527d16635fce4814b9a73e2</anchor>
      <arglist>(const Var &amp;l, const float &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>85098fe1ba5b2bd119cf756cdd12ccd3</anchor>
      <arglist>(const Var &amp;l, const double &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>a703ec49a60910c50db9ddd8a08bc313</anchor>
      <arglist>(const Var &amp;l, const char &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ad144f600d9775dce7d57cb548f7f90f</anchor>
      <arglist>(const Var &amp;l, const char *r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ef495115b59b28838c8e2f8aaa115989</anchor>
      <arglist>(const Var &amp;l, const string &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>014316817c3584b2c8e20cf49c3562d3</anchor>
      <arglist>(const Var &amp;l, const int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>dc359028d42f822b95554d880474e079</anchor>
      <arglist>(const Var &amp;l, const unsigned int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>cbf8cb6876af47be7857804b0c748a0c</anchor>
      <arglist>(const Var &amp;l, const short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>17a72bb79f6fc6dc27c72bb08f6c806f</anchor>
      <arglist>(const Var &amp;l, const unsigned short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>8f53055bdb54db533c03a8a7139da6ce</anchor>
      <arglist>(const Var &amp;l, const long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>8c4a0a31d2513724b615f2a67c445e9f</anchor>
      <arglist>(const Var &amp;l, const unsigned long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>473cf3d5907e3245a797ecd354f6efe4</anchor>
      <arglist>(const Var &amp;l, const float &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>28a679935c4b01783a4603034401d121</anchor>
      <arglist>(const Var &amp;l, const double &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>1f2f8765fcc1f9fcc979b64f03cdcb0f</anchor>
      <arglist>(const Var &amp;l, const int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>6a33b07248dcfe35f6b88fa2b163da72</anchor>
      <arglist>(const Var &amp;l, const unsigned int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5172e71ee7876218112934f63470327a</anchor>
      <arglist>(const Var &amp;l, const short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>8c5360db352dd859748233765ed081a3</anchor>
      <arglist>(const Var &amp;l, const unsigned short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>fe9be5f677aff3819112e4faf3a8aed5</anchor>
      <arglist>(const Var &amp;l, const long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>f6ec1e49df9087313d16a1996a5b56b9</anchor>
      <arglist>(const Var &amp;l, const unsigned long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>76eddfbbcb6ce3b4e0c43c08ff8d62fe</anchor>
      <arglist>(const Var &amp;l, const float &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5c094b2208547b1b2bad13b6e976f7ed</anchor>
      <arglist>(const Var &amp;l, const double &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>b11167b1c6a983a0b884d3819fce476a</anchor>
      <arglist>(const Var &amp;l, const int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5071f85d07aa0f20dcb136d493cf2128</anchor>
      <arglist>(const Var &amp;l, const unsigned int &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>00bfab22e5d267d23f08c3cd953d55d7</anchor>
      <arglist>(const Var &amp;l, const short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>3e47ad4fd49715cc8505d4094c9371bd</anchor>
      <arglist>(const Var &amp;l, const unsigned short &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>9ac304983b488e99fa052b6a7bba392c</anchor>
      <arglist>(const Var &amp;l, const long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>281fe6770293875d26c2d2c1d72449da</anchor>
      <arglist>(const Var &amp;l, const unsigned long &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>56f86bd37ce2de90187a5cba6c336b68</anchor>
      <arglist>(const Var &amp;l, const float &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>5eb45d18589af6e48bc42231b773171c</anchor>
      <arglist>(const Var &amp;l, const double &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>46e5fda32500be987e1289f9b76b278a</anchor>
      <arglist>(const int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>fc411edd9a1a77eea7d62082ac2e3c1d</anchor>
      <arglist>(const unsigned int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>62ca1b32353fa939f1c4368f8aa80a38</anchor>
      <arglist>(const short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7b0b86aacc7d03ad7c032e62c9e0be0c</anchor>
      <arglist>(const unsigned short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ae7664cf10202bf6cd0b8d83e64fa825</anchor>
      <arglist>(const long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>eecfe7eb3700cee039f87f8a6549e055</anchor>
      <arglist>(const unsigned long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d8877e6026e286a940e2bd1cfdc2c669</anchor>
      <arglist>(const float &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>70cc2c56b604013cb09a4b6f27217ce3</anchor>
      <arglist>(const double &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4e030811872ef1975afd95c6a224b9a4</anchor>
      <arglist>(const char &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>46aa3d8c4ecd5cee2935bfcaf7f7c214</anchor>
      <arglist>(const char *l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator+</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>e451950dbece221b6b64ebd7f0edff0a</anchor>
      <arglist>(const string &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>dde335d9e939cf1cd3973e4ecdace55e</anchor>
      <arglist>(const int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7c43f39734e8d41aa205d82be7cb5d38</anchor>
      <arglist>(const unsigned int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4f7449625789e17bc472af57fad227e7</anchor>
      <arglist>(const short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>dc417ed717b1ac7561b106ec1e539303</anchor>
      <arglist>(const unsigned short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>005ebec81dea8e554cb4a08ebcdcded9</anchor>
      <arglist>(const long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>c76c5561bc9e5b78f2a518255dc5c208</anchor>
      <arglist>(const unsigned long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>2f94ddcb80f049344aabbe51a321a1f4</anchor>
      <arglist>(const float &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator-</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>fe92b16eecbf17bf06ec78e89334ab5d</anchor>
      <arglist>(const double &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>314820b745358a8a8e8401295757cac5</anchor>
      <arglist>(const int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>cac6b65e6ea4b5d054735ca44d0394a5</anchor>
      <arglist>(const unsigned int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>b9dc1783c652da766d070f84d08d87c8</anchor>
      <arglist>(const short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>de7c96670f5a85ae9c90ae7df1c4e814</anchor>
      <arglist>(const unsigned short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>10d23b0550458ef7ce050b104c0001c8</anchor>
      <arglist>(const long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>7e468572d8e9c6786915d81e92fdc8b7</anchor>
      <arglist>(const unsigned long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>59586cd5ae3c745baa9363083043c60d</anchor>
      <arglist>(const float &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator*</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d11cecbfd89ab58e9f75012c1d7070aa</anchor>
      <arglist>(const double &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>ad62a92437a4bfd0f2efa16702a26cf6</anchor>
      <arglist>(const int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>1214b9a70f230aa5f0f92e2fd4a1be45</anchor>
      <arglist>(const unsigned int &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>101734bcd7f5a9c1a208e187dab792c7</anchor>
      <arglist>(const short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d97468551c1506c373f2afdb88f40cbe</anchor>
      <arglist>(const unsigned short &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>4815e00071aae3e86ea109e556b74946</anchor>
      <arglist>(const long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>be9bd4aa91c5fda4e4bf8c857dc55e1d</anchor>
      <arglist>(const unsigned long &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>3e60892575af5103410d047ca898cbdf</anchor>
      <arglist>(const float &amp;l, const Var &amp;r)</arglist>
    </member>
    <member kind="friend">
      <type>friend Var</type>
      <name>operator/</name>
      <anchorfile>classVar.html</anchorfile>
      <anchor>d89ff5777f14e0851a010dacfcaa6789</anchor>
      <arglist>(const double &amp;l, const Var &amp;r)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Js::Array</name>
    <filename>classJs_1_1Array.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="class">
    <name>Js::Bool</name>
    <filename>classJs_1_1Bool.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="class">
    <name>Js::Function</name>
    <filename>classJs_1_1Function.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="class">
    <name>Js::JVar</name>
    <filename>classJs_1_1JVar.html</filename>
  </compound>
  <compound kind="class">
    <name>Js::Number</name>
    <filename>classJs_1_1Number.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="class">
    <name>Js::Object</name>
    <filename>classJs_1_1Object.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="class">
    <name>Js::String</name>
    <filename>classJs_1_1String.html</filename>
    <base>Js::JVar</base>
  </compound>
  <compound kind="dir">
    <name>dev/c++/</name>
    <path>/home/neel/dev/c++/</path>
    <filename>dir_a381a3d4d7b5849d8a061ce9e6ddf747.html</filename>
    <dir>dev/c++/cgixx/</dir>
  </compound>
  <compound kind="dir">
    <name>dev/c++/cgixx/cgi++/</name>
    <path>/home/neel/dev/c++/cgixx/cgi++/</path>
    <filename>dir_e289bca861bb9a59ce9e4bdcc5fe9faa.html</filename>
    <dir>dev/c++/cgixx/cgi++/jsutil/</dir>
    <file>apprequest.cpp</file>
    <file>apprequest.h</file>
    <file>base64.cpp</file>
    <file>base64.h</file>
    <file>cgiapp.cpp</file>
    <file>cgiapp.h</file>
    <file>cgiexception.cpp</file>
    <file>cgiexception.h</file>
    <file>cgilayout.cpp</file>
    <file>cgilayout.h</file>
    <file>commontags.cpp</file>
    <file>commontags.h</file>
    <file>cssbuilder.cpp</file>
    <file>cssbuilder.h</file>
    <file>file.cpp</file>
    <file>file.h</file>
    <file>globaldef.h</file>
    <file>htmltag.cpp</file>
    <file>htmltag.h</file>
    <file>htmltagautocompleter.cpp</file>
    <file>htmltagautocompleter.h</file>
    <file>httpheader.cpp</file>
    <file>httpheader.h</file>
    <file>httputil.cpp</file>
    <file>httputil.h</file>
    <file>md5.cpp</file>
    <file>md5.h</file>
    <file>paramsmap.cpp</file>
    <file>paramsmap.h</file>
    <file>paramsmapcore.h</file>
    <file>paramsmapcore.hpp</file>
    <file>request.cpp</file>
    <file>request.h</file>
    <file>session.cpp</file>
    <file>session.h</file>
    <file>sessionconfig.cpp</file>
    <file>sessionconfig.h</file>
    <file>sessioncookieparams.cpp</file>
    <file>sessioncookieparams.h</file>
    <file>stringlist.cpp</file>
    <file>stringlist.h</file>
    <file>var.cpp</file>
    <file>var.h</file>
  </compound>
  <compound kind="dir">
    <name>dev/c++/cgixx/</name>
    <path>/home/neel/dev/c++/cgixx/</path>
    <filename>dir_3aa8ac9089e45afce99fd475e06237c5.html</filename>
    <dir>dev/c++/cgixx/cgi++/</dir>
    <dir>dev/c++/cgixx/debug/</dir>
    <dir>dev/c++/cgixx/src/</dir>
  </compound>
  <compound kind="dir">
    <name>dev/c++/cgixx/debug/</name>
    <path>/home/neel/dev/c++/cgixx/debug/</path>
    <filename>dir_cf2889fbe1192a898a95d7ad850d8aad.html</filename>
    <file>config.h</file>
  </compound>
  <compound kind="dir">
    <name>dev/</name>
    <path>/home/neel/dev/</path>
    <filename>dir_fdc37df15ae87b2a2d69183951b466b4.html</filename>
    <dir>dev/c++/</dir>
  </compound>
  <compound kind="dir">
    <name>dev/c++/cgixx/cgi++/jsutil/</name>
    <path>/home/neel/dev/c++/cgixx/cgi++/jsutil/</path>
    <filename>dir_631f5d54aaf9fd2fa86240c9779b031d.html</filename>
    <file>array.cpp</file>
    <file>array.h</file>
    <file>bool.cpp</file>
    <file>bool.h</file>
    <file>function.cpp</file>
    <file>function.h</file>
    <file>jvar.cpp</file>
    <file>jvar.h</file>
    <file>number.cpp</file>
    <file>number.h</file>
    <file>object.cpp</file>
    <file>object.h</file>
    <file>string.cpp</file>
    <file>string.h</file>
  </compound>
  <compound kind="dir">
    <name>dev/c++/cgixx/src/</name>
    <path>/home/neel/dev/c++/cgixx/src/</path>
    <filename>dir_9baccb16b03fea1e4f8cb171d271cf10.html</filename>
    <file>cgixx.cpp</file>
  </compound>
</tagfile>
