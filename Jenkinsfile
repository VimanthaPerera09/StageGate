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
            
               sh(script:"pwd") 
            
        }
        failure{
            sh(script:"ls -a")
        }
    }

}