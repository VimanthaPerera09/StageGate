pipeline {
    agent any
    stages {
        stage("Build") {
            steps{
            sh(script:"make main")
            sh(script:"./main")
        }
    }
    }
    post{
        success{
                sh("git checkout master")
               sh(script:"git push https://github.com/VimanthaPerera09/StageGate.git master") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}