



<!DOCTYPE html>
<html lang="en" class=" is-copy-enabled is-u2f-enabled">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=1020">
    
    
    <title>MiP-BLE-Protocol/MiP-Protocol.md at master · WowWeeLabs/MiP-BLE-Protocol · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" href="/apple-touch-icon.png">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="WowWeeLabs/MiP-BLE-Protocol" name="twitter:title" /><meta content="MiP-BLE-Protocol - Documents to show the low level MiP command protocol, you can implement your own SDK using your preferred language." name="twitter:description" /><meta content="https://avatars1.githubusercontent.com/u/4486605?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars1.githubusercontent.com/u/4486605?v=3&amp;s=400" property="og:image" /><meta content="WowWeeLabs/MiP-BLE-Protocol" property="og:title" /><meta content="https://github.com/WowWeeLabs/MiP-BLE-Protocol" property="og:url" /><meta content="MiP-BLE-Protocol - Documents to show the low level MiP command protocol, you can implement your own SDK using your preferred language." property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="02784A9E:475D:598B5A3:56A42B1D" name="octolytics-dimension-request_id" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />



  <meta class="js-ga-set" name="dimension1" content="Logged Out">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

        <meta name="expected-hostname" content="github.com">

      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#4078c0">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta content="8ed955d7fcaa6d1a03f34370f5edfa5d46d8881b" name="form-nonce" />

    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-fefb561e0a804c2a181aed0adbaa8ba5aa475e09b7692a3f737cb8bb50ef1c27.css" integrity="sha256-/vtWHgqATCoYGu0K26qLpapHXgm3aSo/c3y4u1DvHCc=" media="all" rel="stylesheet" />
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github2-b2d8d1fd984ff1b181275aaa1276c82bb266b4f58f08f3075941d786d5b432ec.css" integrity="sha256-stjR/ZhP8bGBJ1qqEnbIK7JmtPWPCPMHWUHXhtW0Muw=" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="f08e6513a91b7d33dce8dbaaa01f9efd">

      
  <meta name="description" content="MiP-BLE-Protocol - Documents to show the low level MiP command protocol, you can implement your own SDK using your preferred language.">
  <meta name="go-import" content="github.com/WowWeeLabs/MiP-BLE-Protocol git https://github.com/WowWeeLabs/MiP-BLE-Protocol.git">

  <meta content="4486605" name="octolytics-dimension-user_id" /><meta content="WowWeeLabs" name="octolytics-dimension-user_login" /><meta content="17506788" name="octolytics-dimension-repository_id" /><meta content="WowWeeLabs/MiP-BLE-Protocol" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="17506788" name="octolytics-dimension-repository_network_root_id" /><meta content="WowWeeLabs/MiP-BLE-Protocol" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/WowWeeLabs/MiP-BLE-Protocol/commits/master.atom" rel="alternate" title="Recent Commits to MiP-BLE-Protocol:master" type="application/atom+xml">


      <link rel="canonical" href="https://github.com/WowWeeLabs/MiP-BLE-Protocol/blob/master/MiP-Protocol.md" data-pjax-transient>
  </head>


  <body class="logged_out   env-production linux vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



      
      <div class="header header-logged-out" role="banner">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <span aria-hidden="true" class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions" role="navigation">
        <a class="btn btn-primary" href="/join?source=header" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
      <a class="btn" href="/login?return_to=%2FWowWeeLabs%2FMiP-BLE-Protocol%2Fblob%2Fmaster%2FMiP-Protocol.md" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
    </div>

    <div class="site-search repo-scope js-site-search" role="search">
      <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/WowWeeLabs/MiP-BLE-Protocol/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/WowWeeLabs/MiP-BLE-Protocol/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <label class="js-chromeless-input-container form-control">
    <div class="scope-badge">This repository</div>
    <input type="text"
      class="js-site-search-focus js-site-search-field is-clearable chromeless-input"
      data-hotkey="s"
      name="q"
      placeholder="Search"
      aria-label="Search this repository"
      data-global-scope-placeholder="Search GitHub"
      data-repo-scope-placeholder="Search"
      tabindex="1"
      autocapitalize="off">
  </label>
</form>
    </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item">
            <a class="header-nav-link" href="/explore" data-ga-click="(Logged out) Header, go to explore, text:explore">Explore</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/features" data-ga-click="(Logged out) Header, go to features, text:features">Features</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://enterprise.github.com/" data-ga-click="(Logged out) Header, go to enterprise, text:enterprise">Enterprise</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/pricing" data-ga-click="(Logged out) Header, go to pricing, text:pricing">Pricing</a>
          </li>
      </ul>

  </div>
</div>



    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main" class="main-content">
        <div itemscope itemtype="http://schema.org/WebPage">
    <div id="js-repo-pjax-container" class="context-loader-container js-repo-nav-next" data-pjax-container>
      
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
      <a href="/login?return_to=%2FWowWeeLabs%2FMiP-BLE-Protocol"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <span aria-hidden="true" class="octicon octicon-eye"></span>
    Watch
  </a>
  <a class="social-count" href="/WowWeeLabs/MiP-BLE-Protocol/watchers">
    17
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2FWowWeeLabs%2FMiP-BLE-Protocol"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span aria-hidden="true" class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="/WowWeeLabs/MiP-BLE-Protocol/stargazers">
      32
    </a>

  </li>

  <li>
      <a href="/login?return_to=%2FWowWeeLabs%2FMiP-BLE-Protocol"
        class="btn btn-sm btn-with-count tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span aria-hidden="true" class="octicon octicon-repo-forked"></span>
        Fork
      </a>

    <a href="/WowWeeLabs/MiP-BLE-Protocol/network" class="social-count">
      12
    </a>
  </li>
</ul>

    <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public ">
  <span aria-hidden="true" class="octicon octicon-repo"></span>
  <span class="author"><a href="/WowWeeLabs" class="url fn" itemprop="url" rel="author"><span itemprop="title">WowWeeLabs</span></a></span><!--
--><span class="path-divider">/</span><!--
--><strong><a href="/WowWeeLabs/MiP-BLE-Protocol" data-pjax="#js-repo-pjax-container">MiP-BLE-Protocol</a></strong>

  <span class="page-context-loader">
    <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
  </span>

</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <a href="/WowWeeLabs/MiP-BLE-Protocol" aria-label="Code" aria-selected="true" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /WowWeeLabs/MiP-BLE-Protocol">
    <span aria-hidden="true" class="octicon octicon-code"></span>
    Code
</a>
    <a href="/WowWeeLabs/MiP-BLE-Protocol/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /WowWeeLabs/MiP-BLE-Protocol/issues">
      <span aria-hidden="true" class="octicon octicon-issue-opened"></span>
      Issues
      <span class="counter">1</span>
</a>
  <a href="/WowWeeLabs/MiP-BLE-Protocol/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /WowWeeLabs/MiP-BLE-Protocol/pulls">
    <span aria-hidden="true" class="octicon octicon-git-pull-request"></span>
    Pull requests
    <span class="counter">0</span>
</a>

  <a href="/WowWeeLabs/MiP-BLE-Protocol/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /WowWeeLabs/MiP-BLE-Protocol/pulse">
    <span aria-hidden="true" class="octicon octicon-pulse"></span>
    Pulse
</a>
  <a href="/WowWeeLabs/MiP-BLE-Protocol/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /WowWeeLabs/MiP-BLE-Protocol/graphs">
    <span aria-hidden="true" class="octicon octicon-graph"></span>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/WowWeeLabs/MiP-BLE-Protocol/blob/5e5055d07910d9de6f50751ad361cd279bb593ca/MiP-Protocol.md" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:5815d130b757c2ace71a6ad3584529fd -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    title="master"
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span aria-label="Close" class="octicon octicon-x js-menu-close" role="button"></span>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/WowWeeLabs/MiP-BLE-Protocol/blob/master/MiP-Protocol.md"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/WowWeeLabs/MiP-BLE-Protocol/find/master"
          class="js-show-file-finder btn btn-sm"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/WowWeeLabs/MiP-BLE-Protocol" class="" data-branch="master" data-pjax="true" itemscope="url"><span itemprop="title">MiP-BLE-Protocol</span></a></span></span><span class="separator">/</span><strong class="final-path">MiP-Protocol.md</strong>
  </div>
</div>


  <div class="commit-tease">
      <span class="right">
        <a class="commit-tease-sha" href="/WowWeeLabs/MiP-BLE-Protocol/commit/37792bd0efea5d8bd69234db58add1feb2ba69fe" data-pjax>
          37792bd
        </a>
        <time datetime="2015-04-01T06:56:42Z" is="relative-time">Mar 31, 2015</time>
      </span>
      <div>
        <img alt="@adamgreen" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/1060664?v=3&amp;s=40" width="20" />
        <a href="/adamgreen" class="user-mention" rel="contributor">adamgreen</a>
          <a href="/WowWeeLabs/MiP-BLE-Protocol/commit/37792bd0efea5d8bd69234db58add1feb2ba69fe" class="message" data-pjax="true" title="Add odometer and volume notes

I just added a few clarifying notes:
* Odometer reading (0x85) - Acts like a car odometer.  It&#39;s the total
  distance travelled and doesn&#39;t reset during power cycle.
* Set Mip Volume (0x15) - 0 is off, 1 is low and 7 is highest volume
  setting.">Add odometer and volume notes</a>
      </div>

    <div class="commit-tease-contributors">
      <a class="muted-link contributors-toggle" href="#blob_contributors_box" rel="facebox">
        <strong>2</strong>
         contributors
      </a>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="hongkongkiwi" href="/WowWeeLabs/MiP-BLE-Protocol/commits/master/MiP-Protocol.md?author=hongkongkiwi"><img alt="@hongkongkiwi" class="avatar" height="20" src="https://avatars0.githubusercontent.com/u/1750976?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="adamgreen" href="/WowWeeLabs/MiP-BLE-Protocol/commits/master/MiP-Protocol.md?author=adamgreen"><img alt="@adamgreen" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/1060664?v=3&amp;s=40" width="20" /> </a>


    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@hongkongkiwi" height="24" src="https://avatars2.githubusercontent.com/u/1750976?v=3&amp;s=48" width="24" />
            <a href="/hongkongkiwi">hongkongkiwi</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@adamgreen" height="24" src="https://avatars3.githubusercontent.com/u/1060664?v=3&amp;s=48" width="24" />
            <a href="/adamgreen">adamgreen</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="btn-group">
      <a href="/WowWeeLabs/MiP-BLE-Protocol/raw/master/MiP-Protocol.md" class="btn btn-sm " id="raw-url">Raw</a>
        <a href="/WowWeeLabs/MiP-BLE-Protocol/blame/master/MiP-Protocol.md" class="btn btn-sm js-update-url-with-hash">Blame</a>
      <a href="/WowWeeLabs/MiP-BLE-Protocol/commits/master/MiP-Protocol.md" class="btn btn-sm " rel="nofollow">History</a>
    </div>


        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <span aria-hidden="true" class="octicon octicon-pencil"></span>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <span aria-hidden="true" class="octicon octicon-trashcan"></span>
        </button>
  </div>

  <div class="file-info">
      204 lines (201 sloc)
      <span class="file-info-divider"></span>
    61.4 KB
  </div>
</div>

  
  <div id="readme" class="blob instapaper_body">
    <article class="markdown-body entry-content" itemprop="mainContentOfPage"><p>Please note that all received commands (MiP-&gt;Device) are prefixed with the command you sent. So if you send 0x14, then the response will contain 0x14 for the first byte, then it will follow the table below. We just ignore the returned response.</p>

<table><thead>
<tr>
<th>Name</th>
<th>Code</th>
<th>Direction</th>
<th>Length</th>
<th>Data</th>
<th>Notes</th>
</tr>
</thead><tbody>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Play Sound</td>
<td>0x06</td>
<td>-&gt;MIP</td>
<td>1</td>
<td>BYTE 1 : Sound file index (1~106) or send 0xF7-0xFE for volume</td>
<td>Send 105 to stop playing</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td>2</td>
<td>BYTE 2 : Delay in intervals of 30ms  (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>… (repeat sound file index then delay for as many files as you want to play)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td>17</td>
<td>BYTE 17 : Number of times to repeat (0-255)</td>
<td>Only need to send if you want the sequence to repeat</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set Mip Position</td>
<td>0x08</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BYTE 1 : On back: 0x00, Face down: 0x01</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Distance Drive</td>
<td>0x70</td>
<td>-&gt;MIP</td>
<td>5</td>
<td>BYTE 1 : Forward: 0x00 or Backward: 0x01</td>
<td>20 commands are queued</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Distance (cm): 0x00-0xFF</td>
<td>No speed control</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : Turn Clockwise: 0x01 or Anti-clockwise: 0x00</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4 : Turn Angle(High byte): 0x00~0x01</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 5 : Turn Angle(Low byte): 0x00~0xFF</td>
<td>Note:0x0000(0)~0x0168(360)</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Drive forward with Time</td>
<td>0x71</td>
<td>-&gt;MIP</td>
<td>2</td>
<td>BYTE 1 : Speed (0~30)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 :  Time in 7ms intervals (0~255)</td>
<td>35ms</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Drive backward with Time</td>
<td>0x72</td>
<td>-&gt;MIP</td>
<td>2</td>
<td>BYTE 1 : Speed (0~30)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 :  Time in 7ms intervals (0~255)</td>
<td>Time = Byte2 Value * 7ms</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Turn left by Angle</td>
<td>0x73</td>
<td>-&gt;MIP</td>
<td>2</td>
<td>BYTE 1 : Angle in intervals of 5 degrees (0~255)</td>
<td>Angle = Byte1 Value * 5</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Speed (0~24)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Turn right by Angle</td>
<td>0x74</td>
<td>-&gt;MIP</td>
<td>2</td>
<td>BYTE 1 : Angle in intervals of 5 degrees (0~255)</td>
<td>Angle = Byte1 Value * 5</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Speed (0~24)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Continuous Drive</td>
<td>0x78</td>
<td>-&gt;MIP</td>
<td>2</td>
<td>BYTE 1 : Fw:0x01(slow)~0x20(fast)</td>
<td>Buffer = 0</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>OR Bw:0x21(slow)~0x40(fast)</td>
<td>This command is for single drive or turn</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Right spin:0x41(slow)~0x60(fast)</td>
<td>Note:Sending per 50ms if held</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>OR Left spin:0x61(slow)~0x80(fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 1 : Crazy Fw:0x81(slow)~0xA0(fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>OR Crazy Bw:0xA1(slow)~0xC0(fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2: Crazy Right spin:0xC1(slow)~0xE0(fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>OR Crazy Left spin:0xE1(slow)~0xFF(fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set Game Mode</td>
<td>0x76</td>
<td>-&gt;MIP</td>
<td>1</td>
<td>BYTE 1 : 0x01 – App</td>
<td>The same as cancel Gesture and Radar</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02 – Cage Play back</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x03 – Tracking</td>
<td>The same as enable Radar</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x04 – Dance Play back</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x05 – Default Mip Mode</td>
<td>The same as enable Gesture(0x0A)</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x06 – Stack Play back</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x07 – Trick programming and playback</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x08 – Roam Mode Play back</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Get current MIP Game Mode</td>
<td>0x82</td>
<td>-&gt; MIP</td>
<td>-</td>
<td></td>
<td></td>
</tr>
<tr>
<td>Current MIP Game Mode</td>
<td>0x82</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1 : 0x01 – App</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02 – Cage</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x03 – Tracking</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x04 – Dance</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x05 – Default Mip Mode</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x06 – Stack</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x07 – Trick programming and playback</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x08 – Roam Mode</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Stop</td>
<td>0x77</td>
<td>-&gt;MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Request MIP status</td>
<td>0x79</td>
<td>-&gt; MIP</td>
<td>-</td>
<td></td>
<td></td>
</tr>
<tr>
<td>MIP status</td>
<td>0x79</td>
<td>iOS &lt;-</td>
<td>2</td>
<td>BTYE 1 : Battery Level :0x4D(4.0V)-0x7C(6.4V)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : On back: 0x00</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Face down 0x01</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Upright: 0x02</td>
<td>Note:Send one time per 30 seconds</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Picked up: 0x03</td>
<td>Note:it will be sent after(connecting,falldown,pickup….)</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Hand stand: 0x04</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Face down on tray: 0x05</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>On back with kickstand: 0x06</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Mip Get Up</td>
<td>0x23</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BTYE 1 : 0x00 – Get up when mip has fallen front</td>
<td>Mip will attempt to get up from front if angle is correct</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x01 – Get up when mip has fallen back</td>
<td>Mip will attempt to get up from back if angle is correct</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02 – Get up when mip has fallen back or front</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Request weight update</td>
<td>0x81</td>
<td>-&gt; MIP</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Weight update</td>
<td>0x81</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1 : 0xD3(-45 degree) - 0x2D(+45 degree)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0xD3 (211) (max)~0xFF(min) (255) is holding the weight on the front</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x00(min)~0x2D(max) is holding the weight on the back</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Request Chest LED</td>
<td>0x83</td>
<td>-&gt;MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Chest LED</td>
<td>0x83</td>
<td>iOS &lt;-</td>
<td>5</td>
<td>BYTE 1 : Red (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Green (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : Blue (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4 : if flashing then, TIME ON in 10ms intervals (0~255) else Fade in time in 10ms intervals (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 5 : if flashing then, TIME OFF in 10ms intervals (0~255) else will only be 4 bytes</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set Chest LED</td>
<td>0x84</td>
<td>-&gt;MIP</td>
<td>3</td>
<td>BYTE 1 : Red (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Green (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : Blue (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Flash Chest LED</td>
<td>0x89</td>
<td>-&gt;MIP</td>
<td>5</td>
<td>BYTE 1 : Red (0~255)</td>
<td>Value of 0 means LED color will be changed immediately</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Green (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : Blue (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4 : TIME ON in 20ms intervals (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 5 : TIME OFF in 20ms intervals (0~255)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Time on = Byte4 Value * 10ms</td>
</tr>
<tr>
<td>Set Head LED</td>
<td>0x8A</td>
<td>-&gt;MIP</td>
<td>4</td>
<td>BYTE 1 : LIGHT 1 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td>Time off = Byte5 Value * 10ms</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : LIGHT2 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : LIGHT3 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4 : LIGHT4 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td>Request Head LED</td>
<td>0x8B</td>
<td>-&gt;MIP</td>
<td>-</td>
<td></td>
<td></td>
</tr>
<tr>
<td>Head LED</td>
<td>0x8B</td>
<td>iOS &lt;-</td>
<td>4</td>
<td>BYTE 1 : LIGHT 1 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : LIGHT2 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3 : LIGHT3 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4 : LIGHT4 (0=off, 1=on, 2=blink slow, 3=blink fast)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Read Odometer</td>
<td>0x85</td>
<td>-&gt;MIP</td>
<td>-</td>
<td></td>
<td></td>
</tr>
<tr>
<td>Odometer reading</td>
<td>0x85</td>
<td>iOS &lt;-</td>
<td>4</td>
<td>BYTE 1 &amp; 2 &amp; 3 &amp; 4 : Distance ((0~4294967296)/48.5) cm</td>
<td>Total distance travelled.  Not reset by power cycle.</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>1cm=48.5, 0xFFFFFFFF=4294967295=88556026.7cm</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 1 &amp; 2 &amp; 3 &amp; 4 :Byte1 is highest byte</td>
<td></td>
</tr>
<tr>
<td>Reset Odometer</td>
<td>0x86</td>
<td>-&gt;MIP</td>
<td>-</td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Sent only when requested unless it is over 4294967296 then it sends to app and resets</td>
</tr>
<tr>
<td>Gesture Detect</td>
<td>0x0A</td>
<td>IOS&lt;-</td>
<td>1</td>
<td>BYTE 1 : Left: 0x0A</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Right: 0x0B</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Center Sweep Left: 0x0C</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Center Sweep Right: 0x0D</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Center Hold: 0x0E</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Forward: 0x0F</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Back: 0x10</td>
<td>(700ms hold)</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set Gesture Or Radar Mode</td>
<td>0x0C</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BYTE 1 :</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x00: Disable Gesture and Radar</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02: Gesture Mode on (Disable Radar)</td>
<td>Gesture mode is tracking hand gestures</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x04: Radar Mode on (Disable Gesture)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Get Radar Mode</td>
<td>0x0D</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Radar Mode Status</td>
<td>0x0D</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1: 0x00: Disable Gesture and Radar</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02: Gesture Mode on (Disable Radar)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x04: Radar Mode on (Disable Gesture)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Radar Response</td>
<td>0x0C</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1 : 0x01: No object Or object disappear</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x02: See object in 10cm~30cm</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>0x03: See object less than 10cm</td>
<td>Used for radar</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>MIP Detection Mode</td>
<td>0x0E</td>
<td>-&gt; MIP</td>
<td>2</td>
<td>BYTE 1 : Off: 0x00, On: 0x1-255 for ID number</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Set IR Tx power(1~120)(About 1cm~300cm)</td>
<td></td>
</tr>
<tr>
<td>Request MIP Detection Mode</td>
<td>0x0F</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Mip Detection Status</td>
<td>0x0F</td>
<td>iOS &lt;-</td>
<td>2</td>
<td>BYTE 1 : Off: 0x00, On: 0x1-255 for ID number</td>
<td>This constantly 'pings' other MiPs to check if any are in range. When this is enabled it will automatically disable Radar mode &amp; gesture mode</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Set IR Tx power(1~120)(About 1cm~300cm)</td>
<td></td>
</tr>
<tr>
<td>Mip Detected</td>
<td>0x04</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1 : ID number, if got the 0x00 means find one MIP without setting number</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Shake Detected</td>
<td>0x1A</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>IR Remote Control Enabled</td>
<td>0x10</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BTYE 1 : Off: 0x00, On: 0x01</td>
<td></td>
</tr>
<tr>
<td>Request IR Control Enabled</td>
<td>0x11</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>IR Control Status</td>
<td>0x11</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BTYE 1 : Off: 0x00, On: 0x01</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Sleep</td>
<td>0xFA</td>
<td>MIP&lt;-&gt;IOS</td>
<td>-</td>
<td></td>
<td>Power down bluetooth.</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Disconnect App</td>
<td>0xFE</td>
<td>-&gt;MIP</td>
<td>-</td>
<td>-</td>
<td>Mip should switch off app mode and return to previous mode</td>
</tr>
<tr>
<td>Force BLE disconnect</td>
<td>0xFC</td>
<td>-&gt;MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set User Data</td>
<td>0x12</td>
<td>-&gt; MIP</td>
<td>2</td>
<td>BYTE 1 : Data address(0x20~0x2F)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Data</td>
<td></td>
</tr>
<tr>
<td>Get User Or Other Eeprom Data</td>
<td>0x13</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BYTE 1 : User Data address(0x20~0x2F) and other data is in Eeprom</td>
<td></td>
</tr>
<tr>
<td>MIP User Or Other Eeprom Data</td>
<td>0x13</td>
<td>iOS &lt;-</td>
<td>2</td>
<td>BYTE 1 : User Data address(0x20~0x2F) and other data is in Eeprom</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2 : Data</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Get Mip Software Version</td>
<td>0x14</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Mip Software Version</td>
<td>0x14</td>
<td>iOS &lt;-</td>
<td>4</td>
<td>BYTE 1: Year (software ver)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2: Month (software ver)</td>
<td>Gets some software version info</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 3: Day (software ver)</td>
<td>Date of the software release</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 4: Unique Version #</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Get Mip Hardware Info</td>
<td>0x19</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td>this is used if more than one release on one day, normally it is 0x00</td>
</tr>
<tr>
<td>Mip Hardware Info</td>
<td>0x19</td>
<td>iOS &lt;-</td>
<td>2</td>
<td>BYTE 1: Voice chip version</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE 2: Hardware Version</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Set Mip Volume</td>
<td>0x15</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BYTE 1: Volume level between 0-7</td>
<td>Sets the MIP volume level, 0=off, 7=loudest, Power off save</td>
</tr>
<tr>
<td>Get Mip Volume</td>
<td>0x16</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Mip Volume</td>
<td>0x16</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1: Volume level between 0-7</td>
<td>Reads the current MIP volume level</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Send IR Dongle code</td>
<td>0x8C</td>
<td>-&gt; MIP</td>
<td>6</td>
<td>BYTE1:IR data bit31~bit24</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE2:IR data bit23~bit16</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE3:IR data bit15~bit8</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE4:IR data bit7~bit0</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE5:IR data numbers(1~32):e.g. BYTE5=0x08 means BYTE4 is useful.</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE6:IR Tx power(1~120)(About 1cm~300cm)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Note:It can be useful in shooting game.</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Receive IR Dongle code</td>
<td>0x03</td>
<td>iOS &lt;-</td>
<td>3~5</td>
<td>BYTE 1 : 0x02,0x03,0x04</td>
<td>Receive an IR command</td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE2~BYTE5 are the datas of Transmiting.</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>Byte2 is high byte,Byte5 is low byte</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>(0x03,0x02,0xNN,0xNN)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>(0x03,0x03,0xNN,0xNN,0xNN)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>(0x03,0x04,0xNN,0xNN,0xNN,0xNN)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Clap times</td>
<td>0x1D</td>
<td>iOS &lt;-</td>
<td>1</td>
<td>BYTE 1: 0x01 – 0xFF times</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Clap Enabled</td>
<td>0x1E</td>
<td>-&gt; MIP</td>
<td>1</td>
<td>BTYE 1 : Off: 0x00, On: 0x01(Default is disable after App connecting)</td>
<td></td>
</tr>
<tr>
<td>Request Clap Enabled</td>
<td>0x1F</td>
<td>-&gt; MIP</td>
<td>-</td>
<td>-</td>
<td></td>
</tr>
<tr>
<td>Clap Status</td>
<td>0x1F</td>
<td>iOS &lt;-</td>
<td>3</td>
<td>BTYE 1 : Off: 0x00, On: 0x01</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td>BYTE2~BYTE3(Delay time by two clap)</td>
<td></td>
</tr>
<tr>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr>
<td>Delay time between two claps</td>
<td>0x20</td>
<td>-&gt; MIP</td>
<td>2</td>
<td>BYTE1(high)~BYTE2(low)(Delay time by two clap)</td>
<td></td>
</tr>
</tbody></table>
</article>
  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop"></div>
</div>

    </div>
  </div>

    </div>

        <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>
        <li><a href="https://github.com/pricing" data-ga-click="Footer, go to pricing, text:pricing">Pricing</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span aria-hidden="true" class="mega-octicon octicon-mark-github" title="GitHub "></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2016 <span title="0.03296s from github-fe126-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    
    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span aria-hidden="true" class="octicon octicon-alert"></span>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <span aria-hidden="true" class="octicon octicon-x"></span>
      </button>
      Something went wrong with that request. Please try again.
    </div>


      
      <script crossorigin="anonymous" integrity="sha256-nuVc6vh/w03IYzQkn+9svs6I6BVHjg++gWQtV+0P/4k=" src="https://assets-cdn.github.com/assets/frameworks-9ee55ceaf87fc34dc86334249fef6cbece88e815478e0fbe81642d57ed0fff89.js"></script>
      <script async="async" crossorigin="anonymous" integrity="sha256-G+Ga1mKcjStSuxsBHGt+z3Q9tWkFTBwPNsjZhYzj9kA=" src="https://assets-cdn.github.com/assets/github-1be19ad6629c8d2b52bb1b011c6b7ecf743db569054c1c0f36c8d9858ce3f640.js"></script>
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner hidden">
      <span aria-hidden="true" class="octicon octicon-alert"></span>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
    <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <span aria-hidden="true" class="octicon octicon-x"></span>
    </button>
  </div>
</div>

  </body>
</html>

