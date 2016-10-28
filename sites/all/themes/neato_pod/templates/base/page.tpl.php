<div role="document" class="page">

 <!-- ______________________ HEADER _______________________ -->
  <div role="header" class="header-top-outer">
    
    <div class="no-inner-wrapper">  
      <?php if (!empty($page['header-top'])): ?>
        <header id="site-header" class="header-top">
            <?php print render($page['header-top']); ?>
        </header>
      <?php endif; ?>
    </div>
  </div>


  <div role="header" class="header-middle-outer">

    <div class="inner-wrapper">
      <?php if (!empty($page['header-middle-left'])): ?>
        <header id="site-header" class="header-middle-left"> 
            <?php print render($page['header-middle-left']); ?>   
        </header>
      <?php endif; ?>

      <?php if (!empty($page['header-middle-right'])): ?>
        <header id="site-header" class="header-middle-right">  
            <?php print render($page['header-middle-right']); ?>
        </header>
      <?php endif; ?>

    </div>
    
  </div>


  <div role="header" class="header-bottom-outer">

    <div class="inner-wrapper">
      <?php if (!empty($page['header-bottom-left'])): ?>
        <header id="site-header" class="header-bottom-left"> 
            <?php print render($page['header-bottom-left']); ?>   
        </header>
      <?php endif; ?>

      <?php if (!empty($page['header-bottom-right'])): ?>
        <header id="site-header" class="header-bottom-right">  
            <?php print render($page['header-bottom-right']); ?>
        </header>
      <?php endif; ?>

    </div>
    
  </div>
    


<!-- ______________________ FEATURED _______________________ -->
  <div class="featured-outer">

      <?php if (!empty($page['featured'])): ?>
        <header id="featured" class="inner-wrapper">      
            <?php print render($page['featured']); ?>
        </header>
      <?php endif; ?>

  </div>
<!-- ______________________ ERROR _______________________ -->
 
  <?php if ($messages): ?>
    <section id="messages">
      <div class="inner-wrapper">
        <?php print $messages; ?>
      </div>
    </section>
  <?php endif; ?>

<!-- ______________________ BREADCRUMB _______________________ -->
  
  <div class="breadcrumb-outer">

    <?php if ($breadcrumb): ?>
      <header id="breadcrumb" class="inner-wrapper">
          <?php print $breadcrumb; ?>
      </header>
    <?php endif; ?>

  </div>


<!-- ______________________ MAIN _______________________ -->

  <div class="main-outer">

    <main role="main" class="main">
      <?php if (!empty($page['sidebar_first'])): ?>
        <aside id="sidebar-first" role="complementary" class="sidebar">
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?>

      <section id="content">
        <?php if ($title): ?>
          <?php print render($title_prefix); ?>
            <h1 id="page-title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

        <?php print render($page['content']); ?>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside id="sidebar-second" role="complementary" class="sidebar">
          <?php print render($page['sidebar_second']); ?>
        </aside>
      <?php endif; ?>
    </main>

  </div>



<!-- ______________________ FOOTER _______________________ -->

  <div role="footer" class="footer-top-outer">

    <div class="inner-wrapper">
      <?php if (!empty($page['footer_top_left'])): ?>
        <footer id="footer-top-left" class="footer-top-left" role="contentinfo">
          <?php print render($page['footer_top_left']); ?>
        </footer>
      <?php endif; ?>
  
      <?php if (!empty($page['footer_top_right'])): ?>
        <footer id="footer-top-right" class="footer-top-right" role="contentinfo">
          <?php print render($page['footer_top_right']); ?>
        </footer>
      <?php endif; ?>
    </div>

  </div>

  <div role="footer" class="footer-bottom-outer">

    <div class="no-inner-wrapper">
      <?php if (!empty($page['footer_bottom'])): ?>
        <footer id="footer-bottom" class="footer-bottom" role="contentinfo">
          <?php print render($page['footer_bottom']); ?>
        </footer>
      <?php endif; ?>
    </div>

  </div>


</div>